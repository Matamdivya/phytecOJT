#include <stdio.h> 
typedef struct { 
int roll; 
char name[30]; 
float marks; 
} Student; 
void printTopper(Student s1, Student s2) { 
if(s1.marks > s2.marks) 
printf("Topper: %s (%.2f)\n", s1.name, s1.marks); 
else if(s2.marks > s1.marks) 
printf("Topper: %s (%.2f)\n", s2.name, s2.marks); 
else 
printf("Both have same marks: %.2f\n", s1.marks); 
} 
int main() { 
Student a = {61, "divya", 94.6}; 
Student b = {16, "swathi", 96.2}; 
printTopper(a, b); 
return 0; 
}
