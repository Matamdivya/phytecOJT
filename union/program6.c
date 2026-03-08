#include <stdio.h> 
union Item { 
char *name; 
int code; 
}; 
int main() { 
union Item it; 
it.name = "Mouse"; 
printf("Name: %s\n", it.name); 
it.code = 404; 
printf("Code: %d\n", it.code);   // string pointer overwritten 
return 0; 
} 

