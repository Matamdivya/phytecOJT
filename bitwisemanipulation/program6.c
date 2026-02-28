#include <stdio.h> 
int countActiveBits(unsigned char status) { 
int count = 0; 
while (status) { 
count += status & 1; 
status >>= 1; 
} 
return count; 
} 
int main() { 
unsigned char fault_register = 0b10110110;  // 6 bits set = 6 faults 
int active = countActiveBits(fault_register); 
printf("Number of active faults/sensors: %d\n", active); 
return 0; 
}
