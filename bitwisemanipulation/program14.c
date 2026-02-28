#include <stdio.h> 
unsigned char rotateLeft(unsigned char value, int positions) { 
return (value << positions) | (value >> (8 - positions)); 
} 
int main() { 
unsigned char pattern = 0b00000001;  // single LED ON 
printf("Initial:  %02X\n", pattern); 
for (int i = 0; i < 8; i++) { 
pattern = rotateLeft(pattern, 1); 
printf("Shift %d: %02X\n", i+1, pattern); 
} 
return 0; 
}
