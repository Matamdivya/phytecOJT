#include <stdio.h> 
#define LED_RED   (1 << 2) 
#define LED_BLUE  (1 << 5) 
#define BUZZER    (1 << 7) 
int main() { 
unsigned char gpio = 0x00; 
gpio |= (LED_RED | LED_BLUE | BUZZER); 
printf("GPIO after enabling: 0x%02X\n", gpio); 
return 0; 
}
