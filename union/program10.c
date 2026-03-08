#include <stdio.h> 
union Color { 
int rgb; 
char name[20]; 
}; 
int main() { 
union Color palette[3] = {
	{0xFF0000},
       	{"Green"},
       	{0x0000FF}
}; 
union Color *p = palette; 
printf("%s\n",(p+1)->name); 
return 0;
}
