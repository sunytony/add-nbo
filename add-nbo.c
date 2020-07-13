#include <stdint.h>
#include <stdio.h>
#include "add-nbo.h"

uint32_t my_ntohl(uint32_t a){
	return ((a & 0xff000000) >> 24) |
	  		((a & 0x00ff0000) >> 8) |
			((a & 0x0000ff00) << 8) |
			((a & 0x000000ff) << 24);
}

void add_nbo(uint32_t a, uint32_t b){
	uint32_t num1 = my_ntohl(a);
	uint32_t num2 = my_ntohl(b);
	uint32_t sum = num1 + num2;
	printf("%d(%x) + %d(%x) = %d(%x)\n", num1, num1, num2, num2, sum, sum);

	return;
}

