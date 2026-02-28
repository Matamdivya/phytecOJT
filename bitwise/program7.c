#include <stdio.h> 
#define POWER_ON  0x01 
#define DATA_RDY  0x08 
#define TX_ACTIVE 0x20 
int main() { 
unsigned char status = 0; 
status |= POWER_ON; 
status |= DATA_RDY; 
printf("Status register: 0x%02X\n", status); 
return 0; 
}
