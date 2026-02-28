#include <stdio.h> 
int setBit(int register_value, int bit_position) { 
return register_value | (1 << bit_position); 
} 
int main() { 
int gpio_port = 0b00000000;   // initial all LEDs off 
printf("Before: 0x%02X\n", gpio_port); 
// Turn ON LED connected to bit 3 (0-based) 
gpio_port = setBit(gpio_port, 3); 
printf("After turning ON bit 3: 0x%02X\n", gpio_port); 
return 0; 
}
