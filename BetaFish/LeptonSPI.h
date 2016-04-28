#ifndef LEPTONSPI
#define LEPTONSPI

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <limits.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

#define PACKET_SIZE 164
#define PACKET_SIZE_UINT16 (PACKET_SIZE/2)
#define PACKETS_PER_FRAME 60
#define FRAME_SIZE_UINT16 (PACKET_SIZE_UINT16*PACKETS_PER_FRAME)
#define FPS 27;

#define VOSPI_FRAME_SIZE (164)






uint8_t lepton_frame_packet[PACKET_SIZE];
uint8_t frame[PACKET_SIZE*PACKETS_PER_FRAME];


int fd;


void grab_frame();
int initCamera();
void getFrame();
int closeCamera();



#endif
