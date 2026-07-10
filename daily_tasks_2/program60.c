//highest percentage of marks and also average of other students marks percetnage
#include<stdio.h>
typedef  struct student{
	char name[20];
	float marks;
}stu;
int main(){
	int i;
	float total_marks=100,percentage;
	stu s[5];
	for(i=0;i<5;i++){

		printf("Enter name of the student:");
		scanf("%s",s[i].name);
		printf("Enter marks of the student:");
		scanf("%f",&marks);
	         percentage=(marks/total_marks)*100;
}
flaot max=s[0].marks;
for(i=0;i<5;i++){
	if(s[i]>s[0]){
		max=s[i];
}
}
float avg=0
for(i=0;i<5;i++){
	avg+=s[0].marks;
																																																																																																																																																																																																																																																																																																																																																																																																																																											
