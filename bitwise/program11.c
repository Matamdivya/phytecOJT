#include <stdio.h> 
int main() { 
int a = 45, b = 78; 
printf("Before: a=%d, b=%d\n", a, b); 
a ^= b; 
b ^= a; 
a ^= b; 
printf("After : a=%d, b=%d\n", a, b); 
return 0; 
}
