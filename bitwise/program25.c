#include <stdio.h> 
int main() { 
signed char val = -30;          
printf("Before: %d\n", val); 
val >>= 2;                      
// 1110 0010 
// sign bit preserved 
printf("After >>2: %d\n", val); // -8 
return 0; 
}
