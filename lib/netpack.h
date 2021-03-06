#ifndef NETPACK_H
#define NETPACK_H

#include "type_define.h"

#define NET_PACKET_DATA_SIZE 1024
#define NET_CODE 0x2766


struct  NetPacketHeader
{
	uint32          wDataSize = 0;
	uint32          wOpcode = 0;
	uint32          wCode = NET_CODE;
	uint32          wSconnId = 0;
};

struct NetPacket
{
	NetPacketHeader     Header;               
	char  pData[0];
};

#endif



