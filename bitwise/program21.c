#include <stdio.h> 
int main() { 
unsigned char pattern = 0x01; 
for (int i = 0; i < 8; i++) { 
printf("0x%02X\n", pattern); 
pattern <<= 1; 
} 
return 0; 
} 
