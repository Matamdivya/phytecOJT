#include <stdio.h> 
int isPowerOfTwo(unsigned int n) { 
return (n > 0) && ((n & (n - 1)) == 0); 
} 
int main() { 
unsigned int buffer_size = 1024; 
if (isPowerOfTwo(buffer_size)) 
printf("%u is power of 2 → good for DMA/memory alignment\n", buffer_size); 
else 
printf("%u is NOT power of 2\n", buffer_size); 
return 0; 
}
