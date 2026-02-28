#include <stdio.h> 
int main() { 
unsigned char byte = 0xB4;   // 1011 0100 
printf("MSB first: "); 
for (int i = 7; i >= 0; i--) { 
printf("%d", (byte >> i) & 1); 
} 
printf("\n"); 
return 0; 
}
