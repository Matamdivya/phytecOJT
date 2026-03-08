#include <stdio.h> 
#include <string.h> 
#define INT_T 1 
#define STR_T 2 
struct Tagged { 
int type; 
union { 
int num; 
char text[40]; 
} data; 
}; 
int main() { 
struct Tagged t = {STR_T, .data.text = "TaggedUnion"}; 
if (t.type == STR_T) 
printf("String: %s\n", t.data.text); 
return 0; 
} 

