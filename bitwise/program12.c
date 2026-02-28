#include <stdio.h> 
int main() { 
unsigned char old_reg = 0b10110011; 
unsigned char new_reg = 0b11110010; 
unsigned char changed = old_reg ^ new_reg; 
printf("Changed bits: 0x%02X\n", changed); 
return 0; 
}
