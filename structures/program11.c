#include <stdio.h> 
typedef struct { 
int roll; 
char name[30]; 
int marks; 
} Student; 
void sortStudents(Student s[], int n) { 
for(int i = 0; i < n-1; i++) 
for(int j = 0; j < n-i-1; j++) 
if(s[j].marks < s[j+1].marks) { 
Student temp = s[j]; 
s[j] = s[j+1]; 
s[j+1] = temp; 
} 
} 
int main() { 
Student class[5]; 
for(int i = 0; i < 5; i++) { 
printf("Student %d:\n", i+1); 
printf("Roll : "); scanf("%d", &class[i].roll); 
printf("Name : "); scanf(" %[^\n]", class[i].name); 
printf("Marks: "); scanf("%d", &class[i].marks); 
} 
sortStudents(class, 5); 
printf("\n--- Merit List ---\n"); 
for(int i = 0; i < 5; i++) { 
printf("%d. %-20s %3d marks\n",  
i+1, class[i].name, class[i].marks); 
} 
return 0; 
}
