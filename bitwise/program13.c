#include <stdio.h> 
int main() { 
unsigned char reg = 0xFF;     // all bits 1 
reg = ~reg;                   
// all bits 0 
printf("After invert: 0x%02X\n", reg); 
return 0; 
}
