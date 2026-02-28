#include <stdio.h> 
int isBitSet(int status_reg, int bit_pos) { 
return (status_reg >> bit_pos) & 1; 
} 
int main() { 
int status_register = 0b00010100;  // bits 2 and 4 are 1 
if (isBitSet(status_register, 2)) 
printf("Emergency STOP button is PRESSED\n"); 
else 
printf("Emergency STOP is released\n"); 
return 0; 
}
