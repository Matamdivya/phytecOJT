#include <stdio.h> 
struct Date { 
int day, month, year; 
}; 
struct Student { 
int roll; 
char name[30]; 
struct Date dob; 
float marks; 
}; 
int main() { 
struct Student s = {61, "divya", {30, 7, 2004}, 92.4}; 
printf("Roll   : %d\n", s.roll); 
printf("Name   : %s\n", s.name); 
printf("DOB    : %02d-%02d-%04d\n",  
s.dob.day, s.dob.month, s.dob.year); 
printf("Marks  : %.2f\n", s.marks); 
return 0;
}
