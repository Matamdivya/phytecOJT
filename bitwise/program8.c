#include <stdio.h> 
int main() { 
unsigned char mode_a = 0b00001100; 
unsigned char mode_b = 0b00110000; 
unsigned char combined = mode_a | mode_b; 
printf("Combined modes: 0x%02X\n", combined);   // 0x3C 
return 0; 
}
