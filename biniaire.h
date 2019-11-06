#ifndef __BINIAIRE__H__
#define __BINIAIRE__H__

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

unsigned char AND(unsigned char a, unsigned char b);
unsigned char OR(unsigned char a, unsigned char b);
unsigned char XOR(unsigned char a, unsigned char b);
unsigned char SHL(unsigned char a, unsigned char b);
unsigned char SHR(unsigned char a, unsigned char b);
unsigned char inverse(unsigned char a);
#endif
