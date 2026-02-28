#include <stdio.h> 
int main() { 
int width = 12; 
unsigned int all_ones = ~0U >> (32 - width);   // 12-bit mask = 0xFFF 
printf("12-bit all-ones mask: 0x%X\n", all_ones); 
return 0; 
}
