#include <stdio.h> 
#include <string.h> 
union Packet { 
int id; 
char message[16]; 
float value; 
}; 
int main() { 
union Packet p; 
strcpy(p.message, "HelloUnion"); 
printf("String  : %s\n", p.message); 
printf("First int view: %d\n", p.id);   // garbage / overlapped 
return 0; 
}  
