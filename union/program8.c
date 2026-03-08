#include <stdio.h> 
union ByteView { 
unsigned int num; 
unsigned char bytes[4]; 
}; 
int main() { 
union ByteView v = {0x12345678}; 
for(int i=0; i<4; i++) 
printf("%02X ", v.bytes[i]); 
printf("\n"); 
return 0; 
} 
