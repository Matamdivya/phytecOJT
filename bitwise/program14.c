#include <stdio.h> 
int main() { 
unsigned char value = 0b10110111; 
// Clear bits 3,4,5 (make them 0) 
unsigned char mask = ~((1<<3)|(1<<4)|(1<<5));  // ~0b00111000 = 0b11000111 
value &= mask; 
printf("After clearing bits 3-5: 0x%02X\n", value); 
return 0; 
}
