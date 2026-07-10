//student marks enety using combination structures and arrays
#include<stdio.h>
typedef struct student{
	char name[20];
	 float marks;
}stu;
int main(){
	int i;
	stu s[10];
	for(i=0;i<10;i++){
		printf("Enter student name:");
		scanf("%s",s[i].name);
		printf("Enter marks of student:");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<10;i++){
		printf("%s scored %.2f marks\n",s[i].name,s[i].marks);
	}
	return 0;
}
