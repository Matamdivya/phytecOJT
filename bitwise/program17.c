#include <stdio.h> 
int main() { 
unsigned char byte = 0x4B;   // 0100 1011 – odd parity 
byte ^= 0x80;                
// flip MSB (parity bit) 
printf("After parity flip: 0x%02X\n", byte); 
return 0; 
}
