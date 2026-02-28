#include <stdio.h> 
int clearBit(int register_value, int bit_position) { 
return register_value & ~(1 << bit_position); 
} 
int main() { 
int control_reg = 0b00101101;  // some bits already set 
printf("Before clear: 0x%02X\n", control_reg); 
// Disable PWM channel (assume bit 2) 
control_reg = clearBit(control_reg, 2); 
printf("After disabling bit 2: 0x%02X\n", control_reg); 
return 0; 
}
