#include <stdio.h> 
#define LED_RED    (1 << 2) 
#define LED_GREEN  (1 << 5) 
#define BUZZER     (1 << 7) 
int enableFeatures(int current_reg) { 
return current_reg | (LED_RED | LED_GREEN | BUZZER); 
} 
int main() { 
int gpio_reg = 0x00; 
gpio_reg = enableFeatures(gpio_reg); 
printf("After enabling LEDs & Buzzer: 0x%02X\n", gpio_reg); 
return 0; 
} 
