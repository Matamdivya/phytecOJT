#include <stdio.h> 
int main() { 
unsigned char bcd = 0x47;   // 0100 0111 → 47 decimal 
int tens  = (bcd >> 4) & 0x0F; 
int units = bcd & 0x0F; 
int decimal = tens * 10 + units; 
printf("BCD 0x%02X → decimal %d\n", bcd, decimal); 
return 0; 
}
