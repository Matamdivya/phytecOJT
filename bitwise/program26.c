#include <stdio.h> 
int main() { 
unsigned short data = 0x5C2F; 
unsigned char high = data >> 8; 
unsigned char low  = data & 0xFF; 
printf("High: 0x%02X   Low: 0x%02X\n", high, low); 
return 0; 
}
