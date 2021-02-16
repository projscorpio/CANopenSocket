#ifndef MSGPARSER_H
#define MSGPARSER_H


#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "binn.h"
#include <sys/socket.h>
#include <arpa/inet.h>
#include <math.h>
#include <queue>
#include "binn.h"

#define MSG_TYPE_ROS_TOPIC 0x2
#define MSG_TYPE_ROS_SERVICE 0x4
#define MSG_TYPE_INTERNAL 0x8

int32_t DriveMoveRoverVelocity(binn *obj);
int32_t DriveControlModeReq(binn *obj);
int32_t DriveControlModeResponse(bool status);

int32_t ResolveTopic(binn* obj, char* topic_name);
int32_t ResolveService(binn* obj, char* service_name);
int32_t ParseMessage(binn *obj, std::queue<binn*>& q);

#endif
