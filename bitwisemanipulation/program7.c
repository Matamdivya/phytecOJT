#include <stdio.h> 
int countSetBitsFast(unsigned int n) { 
int count = 0; 
while (n) { 
n &= (n - 1);   // clears the rightmost set bit 
count++; 
} 
return count; 
} 
int main() { 
unsigned int error_flags = 0x000F5A3C; 
printf("Number of error flags active: %d\n", countSetBitsFast(error_flags)); 
return 0; 
}
