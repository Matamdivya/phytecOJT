#include <stdio.h> 
int main() { 
unsigned int reg = 0; 
int position = 6; 
reg |= (1u << position); 
printf("Bit %d set: 0x%08X\n", position, reg); 
return 0; 
} 
