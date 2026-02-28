#include <stdio.h> 
void swapWithoutTemp(int *a, int *b) { 
*a ^= *b; 
*b ^= *a; 
*a ^= *b; 
} 
int main() { 
int regA = 0xAA, regB = 0x55; 
printf("Before swap → A=0x%02X  B=0x%02X\n", regA, regB); 
swapWithoutTemp(&regA, &regB); 
printf("After  swap → A=0x%02X  B=0x%02X\n", regA, regB); 
return 0; 
} 
