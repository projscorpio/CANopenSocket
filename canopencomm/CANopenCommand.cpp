#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/un.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>// inet_aton
#include <limits.h>


#ifndef BUF_SIZE
#define BUF_SIZE            1000000
#endif






#define FILU_PKG_ADDR "10.0.0.1"
#define FILU_PKG_PORT 6565

#define MAX_MSG_SIZE 2048

char rMsgBuf[MAX_MSG_SIZE];
char sMsgBuf[MAX_MSG_SIZE];

std::queue<binn*> sendQueue;

void shutdownProperly(int code)
{
  exit(-1);
}

void handleSignalAction(int sig_number)
{
  if (sig_number == SIGINT) {
    printf("SIGINT catched.\n");
    shutdownProperly(EXIT_SUCCESS);
  }
  else if (sig_number == SIGPIPE) {
    printf("SIGPIPE catched.\n");
    shutdownProperly(EXIT_SUCCESS);
  }
}

int setupSignals()
{
  struct sigaction sa;
  sa.sa_handler = handleSignalAction;
  if (sigaction(SIGINT, &sa, 0) != 0) {
    perror("sigaction()");
    return -1;
  }
  if (sigaction(SIGPIPE, &sa, 0) != 0) {
    perror("sigaction()");
    return -1;
  }
  
  return 0;
}




int connectToEndpoint(char *addr, uint16_t port)
{
  int s = socket(AF_INET, SOCK_STREAM, 0);
  int flags =1;
  //setsockopt(s, SOL_TCP, TCP_NODELAY, (void *)&flags, sizeof(flags));
  if (s < 0) {
    perror("connectToFiluPKG::socket()");
    return -1;
  }
    int optval = 1;
    //setsockopt(tcp_session.net_sock, SOL_SOCKET, SO_KEEPALIVE, &optval, sizeof(optval));
    //setsockopt(tcp_session.net_sock, SOL_SOCKET, TCP_NODELAY, &optval, sizeof(optval));
    
  struct sockaddr_in server_addr;
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_addr.s_addr = inet_addr(addr);
  server_addr.sin_port = htons(port);
  
  if (connect(s, (struct sockaddr *)&server_addr, sizeof(struct sockaddr)) != 0) {
    perror("connectToFiluPKG::connect()");
    return -1;
  }
  
  return s;
}

int connectToFiluPKG()
{ 
  return connectToEndpoint(FILU_PKG_ADDR, FILU_PKG_PORT);
}

void closeFiluPKGSocket(int s, fd_set *rSet, fd_set *wSet, int code)
{
    FD_CLR(s,rSet);
    FD_CLR(s,wSet);
    close(s);
    printf("Closing FILU_PKG socket. %d\n", code); 
}

uint32_t recvHdr(int s)
{
    int recvSize = 0;
    uint32_t msgSize;
    uint8_t hdrBuf[5];
    while (recvSize < 5)
    {
        ssize_t recvResult = recv(s, (void*)&hdrBuf+recvSize, 5 - recvSize, 0);
        if (recvResult == 0 || recvResult == -1)
        {
            perror("recv");
            return -1;
        }
        recvSize += recvResult;
    }
    msgSize = *(uint32_t*)&hdrBuf[0];
    msgSize = ntohl(msgSize);
    printf("got msgSize: %d\n", msgSize);
    return msgSize;
}

int sendHdr(int s, int mSize)
{
    int sentSize = 0;
    int msgSize = htonl(mSize);
    uint8_t rawHeader[5];
    memcpy((uint8_t*)&rawHeader, (uint8_t*)&msgSize, 4);
    rawHeader[4] = 0x00;

    while (sentSize < 5)
    {
        int sentResult = send(s, (void*)&rawHeader+sentSize, 5 - sentSize, 0);
        if (sentResult == 0 || sentResult == -1)
        {
            perror("send");
            return -1;
        }
        sentSize += sentResult;
    }
    return 5;
}

int sendMsg(int s, char*buf, int mSize)
{
    int sentSize = 0;
    while (sentSize < mSize)
    {
        int sentResult = send(s, (char*)buf+sentSize, mSize - sentSize, 0);
        if (sentResult == 0 || sentResult == -1)
        {
            return -1;
        }
        sentSize += sentResult;
    }
    return sentSize;
}

int recvMsg(int s, char*buf, int mSize)
{
    int recvSize = 0;
    while (recvSize < mSize)
    {
        int recvResult = recv(s, (char*)&buf[recvSize], mSize - recvSize, 0);
        if (recvResult == 0 || recvResult == -1)
        {
            return -1;
        }
        recvSize += recvResult;
    }
    return recvSize;
}

void clearQueue( std::queue<binn*> &q )
{
   std::queue<binn*> empty;
   std::swap( q, empty );
}    






/* Helper functions */
void errExit(char* msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}


static int printErrorDescription = 0;

static void sendCommand(int fd, char* command, size_t commandLength);



/* Extract error description */
typedef struct {
    int code;
    char* desc;
} errorDescs_t;

static const errorDescs_t errorDescs[] = {
        {100, "Request not supported."},
        {101, "Syntax error."},
        {102, "Request not processed due to internal state."},
        {103, "Time-out (where applicable)."},
        {104, "No default net set."},
        {105, "No default node set."},
        {106, "Unsupported net."},
        {107, "Unsupported node."},
        {200, "Lost guarding message."},
        {201, "Lost connection."},
        {202, "Heartbeat started."},
        {203, "Heartbeat lost."},
        {204, "Wrong NMT state."},
        {205, "Boot-up."},
        {300, "Error passive."},
        {301, "Bus off."},
        {303, "CAN buffer overflow."},
        {304, "CAN init."},
        {305, "CAN active (at init or start-up)."},
        {400, "PDO already used."},
        {401, "PDO length exceeded."},
        {501, "LSS implementation- / manufacturer-specific error."},
        {502, "LSS node-ID not supported."},
        {503, "LSS bit-rate not supported."},
        {504, "LSS parameter storing failed."},
        {505, "LSS command failed because of media error."},
        {600, "Running out of memory."},
        {0x00000000, "No abort."},
        {0x05030000, "Toggle bit not altered."},
        {0x05040000, "SDO protocol timed out."},
        {0x05040001, "Command specifier not valid or unknown."},
        {0x05040002, "Invalid block size in block mode."},
        {0x05040003, "Invalid sequence number in block mode."},
        {0x05040004, "CRC error (block mode only)."},
        {0x05040005, "Out of memory."},
        {0x06010000, "Unsupported access to an object."},
        {0x06010001, "Attempt to read a write only object."},
        {0x06010002, "Attempt to write a read only object."},
        {0x06020000, "Object does not exist."},
        {0x06040041, "Object cannot be mapped to the PDO."},
        {0x06040042, "Number and length of object to be mapped exceeds PDO length."},
        {0x06040043, "General parameter incompatibility reasons."},
        {0x06040047, "General internal incompatibility in device."},
        {0x06060000, "Access failed due to hardware error."},
        {0x06070010, "Data type does not match, length of service parameter does not match."},
        {0x06070012, "Data type does not match, length of service parameter too high."},
        {0x06070013, "Data type does not match, length of service parameter too short."},
        {0x06090011, "Sub index does not exist."},
        {0x06090030, "Invalid value for parameter (download only)."},
        {0x06090031, "Value range of parameter written too high."},
        {0x06090032, "Value range of parameter written too low."},
        {0x06090036, "Maximum value is less than minimum value."},
        {0x060A0023, "Resource not available: SDO connection."},
        {0x08000000, "General error."},
        {0x08000020, "Data cannot be transferred or stored to application."},
        {0x08000021, "Data cannot be transferred or stored to application because of local control."},
        {0x08000022, "Data cannot be transferred or stored to application because of present device state."},
        {0x08000023, "Object dictionary not present or dynamic generation fails."},
        {0x08000024, "No data available."}
};

static void printErrorDescs(void) {
    int i, len;

    len = sizeof(errorDescs) / sizeof(errorDescs_t);

    fprintf(stderr, "Internal error codes:\n");

    for(i=0; i<len; i++) {
        const errorDescs_t *ed = &errorDescs[i];

        if(ed->code == 0) break;
        fprintf(stderr, "  - %d - %s\n", ed->code, ed->desc);
    }

    fprintf(stderr, "\n");
    fprintf(stderr, "SDO abort codes:\n");

    for(; i<len; i++) {
        const errorDescs_t *ed = &errorDescs[i];

        fprintf(stderr, "  - 0x%08X - %s\n", ed->code, ed->desc);
    }

    fprintf(stderr, "\n");
}
void DumpHex(const void* data, size_t size) {
	char ascii[17];
	size_t i, j;
	ascii[16] = '\0';
	for (i = 0; i < size; ++i) {
		printf("%02X ", ((unsigned char*)data)[i]);
		if (((unsigned char*)data)[i] >= ' ' && ((unsigned char*)data)[i] <= '~') {
			ascii[i % 16] = ((unsigned char*)data)[i];
		} else {
			ascii[i % 16] = '.';
		}
		if ((i+1) % 8 == 0 || i+1 == size) {
			printf(" ");
			if ((i+1) % 16 == 0) {
				printf("|  %s \n", ascii);
			} else if (i+1 == size) {
				ascii[(i+1) % 16] = '\0';
				if ((i+1) % 16 <= 8) {
					printf(" ");
				}
				for (j = (i+1) % 16; j < 16; ++j) {
					printf("   ");
				}
				printf("|  %s \n", ascii);
			}
		}
	}
}

int fd;
/******************************************************************************/
int main (int argc, char *argv[]) {
    char *socketPath = "/tmp/CO_command_socket";  /* Name of the local domain socket, configurable by arguments. */
    char *inputFilePath = NULL;
    sa_family_t addrFamily = AF_UNIX;
    char  tcpPort[20] = "9090"; /* default port when used in tcp mode */

    char* buf;
    size_t bufSize = sizeof *buf * BUF_SIZE;
    buf = malloc(bufSize);
    char *hostname = "127.0.0.1";
    
    struct sockaddr_un addr_un;
    int opt;
    int i;

        struct addrinfo hints, *res, *rp;
        int errcode;

        memset(&hints, 0, sizeof(hints));
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_STREAM;
        hints.ai_flags |= AI_CANONNAME;

        errcode = getaddrinfo(hostname, tcpPort, &hints, &res);
        if (errcode != 0) {
            fprintf(stderr, "Error! Getaddrinfo for host %s failed\n", hostname);
            free(buf);
            exit(EXIT_FAILURE);
        }

      /* getaddrinfo() returns a list of address structures.
         Try each address until we successfully connect.
         If socket (or connect) fails, we (close the socket
         and) try the next address. */

      for (rp = res; rp != NULL; rp = rp->ai_next) {
          fd = socket(rp->ai_family, rp->ai_socktype,
                       rp->ai_protocol);
          if (fd == -1) {
              continue;
          }

          if (connect(fd, rp->ai_addr, rp->ai_addrlen) != -1) {
			  printf("Connected!\n");
              break;                  /* Success */
          }

          close(fd);
          free(buf);
          errExit("Socket connection failed");
      }

    printErrorDescription = 1; // always print error description


        /*while(fgets(buf, BUF_SIZE, stdin) != NULL) {
			DumpHex(buf, strlen(buf));
            sendCommand(fd, buf, strlen(buf));
        }*/
    while(true)
    {
          printf("Łączymy..\n");
          int fSocket = connectToFiluPKG();

          if(fSocket > 0){
              printf("Connected to FiluPKG %s:%d.\n", FILU_PKG_ADDR, FILU_PKG_PORT);
          }
          else{
              printf("Connection to FiluPKG failed.\n");
              continue;
          }
          
          printf("POŁĄCZENIE ŻYLETA.\n");

          int maxFd = fSocket +1;
          fd_set readFds;
          fd_set writeFds;
          struct timeval tv;
          tv.tv_sec = 1;
          tv.tv_usec = 0;
          int rmSize =0;
          bool hdrRecvd = false;
          clearQueue(sendQueue);
          bool hdrSent = false;
          while(true)
          {
              FD_SET(fSocket, &readFds);
              FD_SET(fSocket, &writeFds);
              int sRet = select(maxFd, &readFds, &writeFds, NULL, &tv);
              if(sRet == -1)
              {
                  perror("select()");
                  break;
              }else
              if(sRet == 0)
              {
                  printf("CZEKAM KURWO\n");
              }else
              if(sRet > 0)
              {
                  if(FD_ISSET(fSocket, &readFds))
                  {
                      if(!hdrRecvd)
                      {
                          rmSize = recvHdr(fSocket);
                          if(rmSize <= 0 || rmSize > MAX_MSG_SIZE)
                          {
                              closeFiluPKGSocket(fSocket, &readFds, &writeFds, rmSize);
                              break;
                          }
                          hdrRecvd = true;
                      }
                      int r = recvMsg(fSocket, &rMsgBuf[0], rmSize);
                      if(r <= 0)
                      {
                          closeFiluPKGSocket(fSocket, &readFds, &writeFds, r);
                      }
                      //got msg, make it binn
                      binn *msg = binn_open(&rMsgBuf[0]);
                      if(msg == nullptr) {
                        printf("Corrupted binn received.\n");
                        closeFiluPKGSocket(fSocket, &readFds, &writeFds, rmSize);
                        break;    
                      }else
                      {
                        ParseMessage(msg, sendQueue);
                        hdrRecvd = false;
                      }
                  }
                  if(FD_ISSET(fSocket, &writeFds))/*send*/
                  {
                      if(!sendQueue.empty())
                      {
                          binn *msg = sendQueue.front();
                          sendQueue.pop(); //no retrans
                          int bSize = binn_size(msg);
                          memcpy(&sMsgBuf[0], binn_ptr(msg), bSize);
                          binn_free(msg);
                          if(!hdrSent)
                          {
                            if(sendHdr(fSocket, bSize) != 5)
                            {
                              closeFiluPKGSocket(fSocket, &readFds, &writeFds, 100);
                              break;
                            }
                            hdrSent = true; 
                          }
                          if(sendMsg(fSocket, &sMsgBuf[0], bSize) != bSize) 
                          {
                            closeFiluPKGSocket(fSocket, &readFds, &writeFds, 200);
                            break;
                          }else hdrSent = false;
                      }             
                  }   
              }
              usleep(100);
          }
          close(fSocket);
    }

    close(fd);

    free(buf);
    exit(EXIT_SUCCESS);
}


static void sendCommand(int fd, char* command, size_t commandLength) {
    size_t n;

    char* replyBuf;
    size_t bufSize = sizeof *replyBuf * BUF_SIZE;
    replyBuf = malloc(bufSize);

    // send command
    if (write(fd, command, commandLength) != commandLength) {
        errExit("Socket write failed");
    }

    //read reply
    n = read(fd, replyBuf, bufSize);

    if(n == -1) {
        errExit("Socket read failed");
    }

    if(printErrorDescription == 1) {
        //check for error reply
        char *errLoc = strstr(replyBuf, "ERROR:");
        char *endLoc = strstr(replyBuf, "\r\n");

        if(errLoc != NULL && endLoc != NULL) {
            //parse error code
            int num;
            char *sRet = NULL;

            errLoc += 6;

            num = strtol(errLoc, &sRet, 0);
            if(strlen(errLoc) != 0 && sRet == strchr(errLoc, '\r')) {
                int i, len;

                len = sizeof(errorDescs) / sizeof(errorDescs_t);

                //lookup error code and print
                for(i=0; i<len; i++) {
                    const errorDescs_t *ed = &errorDescs[i];
                    if(ed->code == num) {
                        sprintf(endLoc, " - %s\r\n", ed->desc);
                        break;
                    }
                }
            }
        }
    }

    printf("%s", replyBuf);
    free(replyBuf);
}

