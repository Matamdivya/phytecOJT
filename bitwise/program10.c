#include <stdio.h> 
int main() { 
char msg[] = "HELLO"; 
int key = 0x5A; 
printf("Original: %s\n", msg); 
for (int i = 0; msg[i]; i++) msg[i] ^= key; 
printf("Encrypted: "); 
for (int i = 0; msg[i]; i++) printf("%02X ", (unsigned char)msg[i]); 
printf("\n"); 
return 0; 
}
