#include <stdio.h> 
int main() { 
unsigned int mode = 0b110110101;     // rwxr-x--- 
unsigned int mask = 0b000001110;     // --wx---- 
unsigned int masked = mode & mask; 
printf("Masked mode: %03o\n", masked); 
return 0; 
}
