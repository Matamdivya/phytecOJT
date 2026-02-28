#include <stdio.h> 
int main() { 
int sensor_value; 
printf("Enter raw sensor reading: "); 
scanf("%d", &sensor_value); 
// In embedded: LSB = 1 → odd = active/high state, LSB = 0 → even = idle/low 
if (sensor_value & 1) 
printf("Sensor is ACTIVE (odd value)\n"); 
else 
printf("Sensor is IDLE (even value)\n"); 
return 0; 
}
