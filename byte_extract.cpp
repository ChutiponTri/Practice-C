#include <stdio.h>
#include <stdint.h>

int main(){
    // Byte extract 
	uint32_t var32 = 29012024;
	uint8_t u8a, u8b, u8c, u8d;
	uint8_t *pu8 = (uint8_t*)&var32;
	u8a = *(pu8+0);
	u8b = *(pu8+1);
	u8c = *(pu8+2);
	u8d = *(pu8+3);
	printf("%p", *pu8);
	printf("%x, %x, %x, %x, %x\n", var32, u8a, u8b, u8c, u8d);
}