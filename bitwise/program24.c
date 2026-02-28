#include <stdio.h> 
int main() { 
unsigned short word = 0xA3F7; 
unsigned char high_byte = word >> 8; 
printf("High byte: 0x%02X\n", high_byte); 
return 0; 
} 
