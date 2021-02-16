/*******************************************************************************

   File - CO_OD.c/CO_OD.h
   CANopen Object Dictionary.

   Copyright (C) 2004-2008 Janez Paternoster

   License: GNU Lesser General Public License (LGPL).

   <http://canopennode.sourceforge.net>

   (For more information see <CO_SDO.h>.)

   This file is part of CANopenNode, an opensource CANopen Stack.
   Project home page is <https://github.com/CANopenNode/CANopenNode>.
   For more information on CANopen see <http://www.can-cia.org/>.
 
   CANopenNode is free and open source software: you can redistribute
   it and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 2 of the
   License, or (at your option) any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.
  
   Following clarification and special exception to the GNU General Public
   License is included to the distribution terms of CANopenNode:
  
   Linking this library statically or dynamically with other modules is
   making a combined work based on this library. Thus, the terms and
   conditions of the GNU General Public License cover the whole combination.
  
   As a special exception, the copyright holders of this library give
   you permission to link this library with independent modules to
   produce an executable, regardless of the license terms of these
   independent modules, and to copy and distribute the resulting
   executable under terms of your choice, provided that you also meet,
   for each linked independent module, the terms and conditions of the
   license of that module. An independent module is a module which is
   not derived from or based on this library. If you modify this
   library, you may extend this exception to your version of the
   library, but you are not obliged to do so. If you do not wish
   to do so, delete this exception statement from your version.
 
   This file was automatically generated with libedssharp Object
   Dictionary Editor vUnknown   DON'T EDIT THIS FILE MANUALLY !!!!
*******************************************************************************/


#include "CO_driver.h"
#include "CO_OD.h"
#include "CO_SDO.h"


/*******************************************************************************
   DEFINITION AND INITIALIZATION OF OBJECT DICTIONARY VARIABLES
*******************************************************************************/


/***** Definition for ROM variables ********************************************/
struct sCO_OD_ROM CO_OD_ROM = {
           CO_OD_FIRST_LAST_WORD,

/*1000*/ 0x0000L,
/*1005*/ 0x40000080L,
/*1006*/ 0x0bb8L,
/*1007*/ 0x0000L,
/*1008*/ {'D', 'R', 'I', 'V', 'E'},
/*1009*/ {'1', '.', '0', '0'},
/*100a*/ {'1', '.', '0', '0'},
/*1014*/ 0x0080L,
/*1015*/ 0x64,
/*1016*/ {0x00000000, 0x00000000, 0x00000000, 0x00000000},
/*1017 hb time - 500ms/2*/ 0xFA,
/*1018*/ {0x4L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1019*/ 0x0L,
/*1029*/ {0x00, 0x00, 0x01, 0x00, 0x00, 0x00},
/*1200*/ {{0x2L, 0x0600L, 0x0580L}},
/*1400*/ {{0x2L, 0x0201L, 0x01L},
/*1401*/ {0x2L, 0x0202L, 0x01L},
/*1402*/ {0x2L, 0x0203L, 0x01L},
/*1403*/ {0x2L, 0x0204L, 0x01L}},
/*1600*/ {{0x3L, 0x30000110L, 0x30000210L, 0x30000320L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1601*/ {0x3L, 0x30010110L, 0x30010210L, 0x30010320L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1602*/ {0x3L, 0x30020110L, 0x30020210L, 0x30030320L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1603*/ {0x3L, 0x30030110L, 0x30030210L, 0x30030320L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L}},
/*1800*/ {{0x6L, 0x0190L, 0x01L, 0x00, 0x0L, 0x00, 0x0L},
/*1801*/ {0x6L, 0x0191L, 0x02L, 0x00, 0x0L, 0x00, 0x0L},
/*1802*/ {0x6L, 0x0192L, 0x01L, 0x00, 0x0L, 0x00, 0x0L},
/*1803*/ {0x6L, 0x0193L, 0x04L, 0x00, 0x0L, 0x00, 0x0L}},
/*1a00*/ {{0x4L, 0x40000110L, 0x40000208L, 0x40000320L, 0x40000408L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1a01*/ {0x4L, 0x40010110L, 0x40010208L, 0x40010320L, 0x40010408L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1a02*/ {0x4L, 0x40020110L, 0x40020208L, 0x40020320L, 0x40020408L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1a03*/ {0x4L, 0x40030110L, 0x40030208L, 0x40030320L, 0x40030408L, 0x0000L, 0x0000L, 0x0000L, 0x0000L}},
/*1f80*/ 0x0001L,
/*2101*/ 0x30L,
/*2102*/ 0xfa,
/*2111*/ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

           CO_OD_FIRST_LAST_WORD,
};


/***** Definition for RAM variables ********************************************/
struct sCO_OD_RAM CO_OD_RAM = {
           CO_OD_FIRST_LAST_WORD,

/*1001*/ 0x0L,
/*1002*/ 0x0000L,
/*1003*/ {0, 0, 0, 0, 0, 0, 0, 0},
/*1010*/ {0x00000003},
/*1011*/ {0x00000001},
/*1280*/ {{0x3L, 0x0000L, 0x0000L, 0x2L}},
/*2100*/ {0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L},
/*2103*/ 0x00,
/*2104*/ 0x00,
/*2107*/ {1000, 0, 0, 0, 0},
/*2108*/ {0},
/*2109*/ {0},
/*2110*/ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
/*2120*/ {0x5L, 0x1234567890abcdefL, 0x234567890abcdef1L, 12.345, 456.789, 0},
/*2130*/ {0x3L, {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 0x00000000L, 0x0000L},
/*3000*/ {0x3L, 0x00, 0x00, 0x0000L},
/*3001*/ {0x3L, 0x00, 0x00, 0x0000L},
/*3002*/ {0x3L, 0x00, 0x00, 0x0000L},
/*3003*/ {0x3L, 0x00, 0x00, 0x0000L},
/*4000*/ {0x4L, 0x00, 0x0, 0x0000L, 0x0L},
/*4001*/ {0x4L, 0x00, 0x0, 0x0000L, 0x0L},
/*4002*/ {0x4L, 0x00, 0x0, 0x0000L, 0x0L},
/*4003*/ {0x4L, 0x00, 0x0, 0x0000L, 0x0L},

           CO_OD_FIRST_LAST_WORD,
};


/***** Definition for EEPROM variables ********************************************/
struct sCO_OD_EEPROM CO_OD_EEPROM = {
           CO_OD_FIRST_LAST_WORD,

/*2106*/ 0x0000L,
/*2112*/ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

           CO_OD_FIRST_LAST_WORD,
};




/*******************************************************************************
   STRUCTURES FOR RECORD TYPE OBJECTS
*******************************************************************************/


/*0x1018*/ const CO_OD_entryRecord_t OD_record1018[5] = {
           {(void*)&CO_OD_ROM.identity.maxSubIndex, 0x05, 0x1 },
           {(void*)&CO_OD_ROM.identity.vendorID, 0x85, 0x4 },
           {(void*)&CO_OD_ROM.identity.productCode, 0x85, 0x4 },
           {(void*)&CO_OD_ROM.identity.revisionNumber, 0x85, 0x4 },
           {(void*)&CO_OD_ROM.identity.serialNumber, 0x85, 0x4 },
};

/*0x1200*/ const CO_OD_entryRecord_t OD_record1200[3] = {
           {(void*)&CO_OD_ROM.SDOServerParameter[0].maxSubIndex, 0x05, 0x1 },
           {(void*)&CO_OD_ROM.SDOServerParameter[0].COB_IDClientToServer, 0x85, 0x4 },
           {(void*)&CO_OD_ROM.SDOServerParameter[0].COB_IDServerToClient, 0x85, 0x4 },
};

/*0x1280*/ const CO_OD_entryRecord_t OD_record1280[4] = {
           {(void*)&CO_OD_RAM.SDOClientParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].COB_IDClientToServer, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].COB_IDServerToClient, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].nodeIDOfTheSDOServer, 0x0e, 0x1 },
};

/*0x1400*/ const CO_OD_entryRecord_t OD_record1400[3] = {
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[0].COB_IDUsedByRPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[0].transmissionType, 0x0e, 0x1 },
};

/*0x1401*/ const CO_OD_entryRecord_t OD_record1401[3] = {
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[1].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[1].COB_IDUsedByRPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[1].transmissionType, 0x0e, 0x1 },
};

/*0x1402*/ const CO_OD_entryRecord_t OD_record1402[3] = {
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[2].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[2].COB_IDUsedByRPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[2].transmissionType, 0x0e, 0x1 },
};

/*0x1403*/ const CO_OD_entryRecord_t OD_record1403[3] = {
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[3].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[3].COB_IDUsedByRPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[3].transmissionType, 0x0e, 0x1 },
};

/*0x1600*/ const CO_OD_entryRecord_t OD_record1600[9] = {
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[4].mappedObject8, 0x86, 0x4 },
};

/*0x1601*/ const CO_OD_entryRecord_t OD_record1601[9] = {
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[5].mappedObject8, 0x86, 0x4 },
};

/*0x1602*/ const CO_OD_entryRecord_t OD_record1602[9] = {
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[6].mappedObject8, 0x86, 0x4 },
};

/*0x1603*/ const CO_OD_entryRecord_t OD_record1603[9] = {
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[7].mappedObject8, 0x86, 0x4 },
};

/*0x1800*/ const CO_OD_entryRecord_t OD_record1800[7] = {
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].COB_IDUsedByTPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].transmissionType, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].inhibitTime, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].compatibilityEntry, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].eventTimer, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[8].SYNCStartValue, 0x0e, 0x1 },
};

/*0x1801*/ const CO_OD_entryRecord_t OD_record1801[7] = {
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].COB_IDUsedByTPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].transmissionType, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].inhibitTime, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].compatibilityEntry, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].eventTimer, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[9].SYNCStartValue, 0x0e, 0x1 },
};

/*0x1802*/ const CO_OD_entryRecord_t OD_record1802[7] = {
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].COB_IDUsedByTPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].transmissionType, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].inhibitTime, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].compatibilityEntry, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].eventTimer, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[10].SYNCStartValue, 0x0e, 0x1 },
};

/*0x1803*/ const CO_OD_entryRecord_t OD_record1803[7] = {
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].COB_IDUsedByTPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].transmissionType, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].inhibitTime, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].compatibilityEntry, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].eventTimer, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[11].SYNCStartValue, 0x0e, 0x1 },
};

/*0x1a00*/ const CO_OD_entryRecord_t OD_record1a00[9] = {
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[12].mappedObject8, 0x86, 0x4 },
};

/*0x1a01*/ const CO_OD_entryRecord_t OD_record1a01[9] = {
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[13].mappedObject8, 0x86, 0x4 },
};

/*0x1a02*/ const CO_OD_entryRecord_t OD_record1a02[9] = {
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[14].mappedObject8, 0x86, 0x4 },
};

/*0x1a03*/ const CO_OD_entryRecord_t OD_record1a03[9] = {
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[15].mappedObject8, 0x86, 0x4 },
};

/*0x2120*/ const CO_OD_entryRecord_t OD_record2120[6] = {
           {(void*)&CO_OD_RAM.testVar.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.testVar.I64, 0xbe, 0x8 },
           {(void*)&CO_OD_RAM.testVar.U64, 0xbe, 0x8 },
           {(void*)&CO_OD_RAM.testVar.R32, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.testVar.R64, 0xbe, 0x8 },
           {(void*)0, 0x0e, 0x0 },
};

/*0x2130*/ const CO_OD_entryRecord_t OD_record2130[4] = {
           {(void*)&CO_OD_RAM.time.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.time.string, 0x86, 0x1 },
           {(void*)&CO_OD_RAM.time.epochTimeBaseMs, 0x8e, 0x8 },
           {(void*)&CO_OD_RAM.time.epochTimeOffsetMs, 0xbe, 0x4 },
};

/*0x3000*/ const CO_OD_entryRecord_t OD_record3000[4] = {
           {(void*)&CO_OD_RAM.micontrol1Status.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrol1Status.devStatus, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol1Status.devErrorReg, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol1Status.devCmdResult, 0xbe, 0x4 },
};

/*0x3001*/ const CO_OD_entryRecord_t OD_record3001[4] = {
           {(void*)&CO_OD_RAM.micontrol2Status.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrol2Status.devStatus, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol2Status.devErrorReg, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol2Status.devCmdResult, 0xbe, 0x4 },
};

/*0x3002*/ const CO_OD_entryRecord_t OD_record3002[4] = {
           {(void*)&CO_OD_RAM.micontrol3Status.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrol3Status.devStatus, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol3Status.devErrorReg, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol3Status.devCmdResult, 0xbe, 0x4 },
};

/*0x3003*/ const CO_OD_entryRecord_t OD_record3003[4] = {
           {(void*)&CO_OD_RAM.micontrol4Status.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrol4Status.devStatus, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol4Status.devErrorReg, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrol4Status.devCmdResult, 0xbe, 0x4 },
};

/*0x4000*/ const CO_OD_entryRecord_t OD_record4000[5] = {
           {(void*)&CO_OD_RAM.micontrolCmd1.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd1.cmdData0_i16, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrolCmd1.cmdData2, 0x3e, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd1.cmdData1, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.micontrolCmd1.cmdExecOnChange, 0x3e, 0x1 },
};

/*0x4001*/ const CO_OD_entryRecord_t OD_record4001[5] = {
           {(void*)&CO_OD_RAM.micontrolCmd2.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd2.cmdData0_i16, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrolCmd2.cmdData2, 0x3e, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd2.cmdData1, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.micontrolCmd2.cmdExecOnChange, 0x3e, 0x1 },
};

/*0x4002*/ const CO_OD_entryRecord_t OD_record4002[5] = {
           {(void*)&CO_OD_RAM.micontrolCmd3.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd3.cmdData0_i16, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrolCmd3.cmdData2, 0x3e, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd3.cmdData1, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.micontrolCmd3.cmdExecOnChange, 0x3e, 0x1 },
};

/*0x4003*/ const CO_OD_entryRecord_t OD_record4003[5] = {
           {(void*)&CO_OD_RAM.micontrolCmd4.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd4.cmdData0_i16, 0xbe, 0x2 },
           {(void*)&CO_OD_RAM.micontrolCmd4.cmdData2, 0x3e, 0x1 },
           {(void*)&CO_OD_RAM.micontrolCmd4.cmdData1, 0xbe, 0x4 },
           {(void*)&CO_OD_RAM.micontrolCmd4.cmdExecOnChange, 0x3e, 0x1 },
};

/*******************************************************************************
   OBJECT DICTIONARY
*******************************************************************************/
const CO_OD_entry_t CO_OD[60] = {

{0x1000, 0x00, 0x85, 4, (void*)&CO_OD_ROM.deviceType},
{0x1001, 0x00, 0x26, 1, (void*)&CO_OD_RAM.errorRegister},
{0x1002, 0x00, 0xa6, 4, (void*)&CO_OD_RAM.manufacturerStatusRegister},
{0x1003, 0x08, 0x86, 4, (void*)&CO_OD_RAM.preDefinedErrorField[0]},
{0x1005, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.COB_ID_SYNCMessage},
{0x1006, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.communicationCyclePeriod},
{0x1007, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.synchronousWindowLength},
{0x1008, 0x00, 0x85, 5, (void*)&CO_OD_ROM.manufacturerDeviceName},
{0x1009, 0x00, 0x85, 4, (void*)&CO_OD_ROM.manufacturerHardwareVersion},
{0x100a, 0x00, 0x85, 4, (void*)&CO_OD_ROM.manufacturerSoftwareVersion},
{0x1010, 0x01, 0x8e, 4, (void*)&CO_OD_RAM.storeParameters[0]},
{0x1011, 0x01, 0x8e, 4, (void*)&CO_OD_RAM.restoreDefaultParameters[0]},
{0x1014, 0x00, 0x85, 4, (void*)&CO_OD_ROM.COB_ID_EMCY},
{0x1015, 0x00, 0x8d, 2, (void*)&CO_OD_ROM.inhibitTimeEMCY},
{0x1016, 0x04, 0x8d, 4, (void*)&CO_OD_ROM.consumerHeartbeatTime[0]},
{0x1017, 0x00, 0x8d, 2, (void*)&CO_OD_ROM.producerHeartbeatTime},
{0x1018, 0x04, 0x00, 0, (void*)&OD_record1018},
{0x1019, 0x00, 0x0d, 1, (void*)&CO_OD_ROM.synchronousCounterOverflowValue},
{0x1029, 0x06, 0x0d, 1, (void*)&CO_OD_ROM.errorBehavior[0]},
{0x1200, 0x02, 0x00, 0, (void*)&OD_record1200},
{0x1280, 0x03, 0x00, 0, (void*)&OD_record1280},
{0x1400, 0x02, 0x00, 0, (void*)&OD_record1400},
{0x1401, 0x02, 0x00, 0, (void*)&OD_record1401},
{0x1402, 0x02, 0x00, 0, (void*)&OD_record1402},
{0x1403, 0x02, 0x00, 0, (void*)&OD_record1403},
{0x1600, 0x08, 0x00, 0, (void*)&OD_record1600},
{0x1601, 0x08, 0x00, 0, (void*)&OD_record1601},
{0x1602, 0x08, 0x00, 0, (void*)&OD_record1602},
{0x1603, 0x08, 0x00, 0, (void*)&OD_record1603},
{0x1800, 0x06, 0x00, 0, (void*)&OD_record1800},
{0x1801, 0x06, 0x00, 0, (void*)&OD_record1801},
{0x1802, 0x06, 0x00, 0, (void*)&OD_record1802},
{0x1803, 0x06, 0x00, 0, (void*)&OD_record1803},
{0x1a00, 0x08, 0x00, 0, (void*)&OD_record1a00},
{0x1a01, 0x08, 0x00, 0, (void*)&OD_record1a01},
{0x1a02, 0x08, 0x00, 0, (void*)&OD_record1a02},
{0x1a03, 0x08, 0x00, 0, (void*)&OD_record1a03},
{0x1f80, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.NMTStartup},
{0x2100, 0x00, 0xa6, 10, (void*)&CO_OD_RAM.errorStatusBits},
{0x2101, 0x00, 0x0d, 1, (void*)&CO_OD_ROM.CANNodeID},
{0x2102, 0x00, 0x8d, 2, (void*)&CO_OD_ROM.CANBitRate},
{0x2103, 0x00, 0x8e, 2, (void*)&CO_OD_RAM.SYNCCounter},
{0x2104, 0x00, 0x86, 2, (void*)&CO_OD_RAM.SYNCTime},
{0x2106, 0x00, 0x87, 4, (void*)&CO_OD_EEPROM.powerOnCounter},
{0x2107, 0x05, 0xbe, 2, (void*)&CO_OD_RAM.performance[0]},
{0x2108, 0x01, 0xa6, 2, (void*)&CO_OD_RAM.temperature[0]},
{0x2109, 0x01, 0xa6, 2, (void*)&CO_OD_RAM.voltage[0]},
{0x2110, 0x10, 0xfe, 4, (void*)&CO_OD_RAM.variableInt32[0]},
{0x2111, 0x10, 0xfd, 4, (void*)&CO_OD_ROM.variableROM_Int32[0]},
{0x2112, 0x10, 0xff, 4, (void*)&CO_OD_EEPROM.variableNV_Int32[0]},
{0x2120, 0x05, 0x00, 0, (void*)&OD_record2120},
{0x2130, 0x03, 0x00, 0, (void*)&OD_record2130},
{0x3000, 0x03, 0x00, 1, (void*)&OD_record3000},
{0x3001, 0x03, 0x00, 1, (void*)&OD_record3001},
{0x3002, 0x03, 0x00, 1, (void*)&OD_record3002},
{0x3003, 0x03, 0x00, 1, (void*)&OD_record3003},
{0x4000, 0x04, 0x00, 1, (void*)&OD_record4000},
{0x4001, 0x04, 0x00, 1, (void*)&OD_record4001},
{0x4002, 0x04, 0x00, 1, (void*)&OD_record4002},
{0x4003, 0x04, 0x00, 1, (void*)&OD_record4003},
};
