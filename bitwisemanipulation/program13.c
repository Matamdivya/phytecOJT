#include <stdio.h> 
#define DISABLE_PWM    (1 << 3) 
#define DISABLE_ADC    (1 << 6) 
int disableModules(int reg) { 
return reg & ~(DISABLE_PWM | DISABLE_ADC); 
} 
int main() { 
int peripheral_reg = 0x4F;   // 01001111 
peripheral_reg = disableModules(peripheral_reg); 
printf("After disabling PWM & ADC: 0x%02X\n", peripheral_reg); 
return 0; 
} 
C 
// 14. Rotate bits left – used in CRC calculation, encryption, LED chaser 
#include <stdio.h> 
unsigned char rotateLeft(unsigned char value, int positions) { 
return (value << positions) | (value >> (8 - positions)); 
} 
