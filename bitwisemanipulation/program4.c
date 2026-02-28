#include <stdio.h> 
int toggleBit(int reg, int pos) { 
return reg ^ (1 << pos); 
} 
int main() { 
int relay_status = 0b00000101;  // relay 0 and 2 ON 
printf("Before toggle: 0x%02X\n", relay_status); 
// Toggle relay connected to bit 0 
relay_status = toggleBit(relay_status, 0); 
printf("After toggle bit 0: 0x%02X\n", relay_status); 
return 0; 
}
