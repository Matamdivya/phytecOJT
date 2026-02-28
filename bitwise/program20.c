#include <stdio.h> 
int main() { 
unsigned char high = 0x3A; 
unsigned char low  = 0xF7; 
unsigned short combined = (high << 8) | low; 
printf("Combined: 0x%04X\n", combined); 
return 0; 
} 
