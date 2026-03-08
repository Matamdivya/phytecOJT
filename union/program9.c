#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
union Dyn { 
int *pi; 
char *ps; 
}; 
int main() { 
union Dyn d; 
d.ps = malloc(20); 
strcpy(d.ps, "Allocated"); 
printf("%s\n", d.ps); 
free(d.ps); 
return 0; 
}
