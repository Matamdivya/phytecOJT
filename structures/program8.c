#include <stdio.h> 
#include <stdlib.h> 
typedef struct { 
char *name; 
int age; 
float gpa; 
} Student; 
int main() { 
Student s; 
s.name = (char*) malloc(40 * sizeof(char)); 
if(!s.name) return 1; 
printf("Enter name: "); 
scanf(" %[^\n]", s.name); 
printf("Enter age : "); 
scanf("%d", &s.age); 
printf("Enter GPA : "); 
scanf("%f", &s.gpa); 
printf("\n%s, %d years, GPA = %.2f\n", s.name, s.age, s.gpa); 
free(s.name); 
return 0; 
}
