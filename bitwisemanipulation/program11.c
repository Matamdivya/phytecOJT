#include <stdio.h> 
unsigned char getLowerNibble(unsigned char value) { 
return value & 0x0F; 
} 
int main() { 
unsigned char dip_switch = 0xA7;  // 1010 0111 
unsigned char lower = getLowerNibble(dip_switch); 
printf("DIP switch lower 4 bits: 0x%X (%d)\n", lower, lower); 
return 0; 
}
