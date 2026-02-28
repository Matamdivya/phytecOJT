#include <stdio.h> 
int main() { 
unsigned char data = 0xA3;   // 1010 0011 
unsigned char inverted_lower = (~data) & 0x0F; 
printf("Lower nibble inverted: 0x%X\n", inverted_lower);   // 0xC 
return 0; 
}
