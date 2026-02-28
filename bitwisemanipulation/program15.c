#include <stdio.h> 
int extractBitField(unsigned int reg, int start_bit, int length) { 
return (reg >> start_bit) & ((1U << length) - 1); 
} 
int main() { 
// Example: status register 0x00003A00 → temperature sensor reading in bits 9–14 
unsigned int status_reg = 0x00003A00; 
// Extract 6-bit temperature code starting from bit 9 
int temp_code = extractBitField(status_reg, 9, 6); 
printf("Temperature sensor code: %d (0x%X)\n", temp_code, temp_code); 
return 0;
}
