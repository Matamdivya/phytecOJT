//comparsion of two students marks in structures 
#include<stdio.h>
#include<string.h>
 typedef struct student{
	char name[20];
	int id;
	float marks;
}stu;
int main(){
stu s1;
printf("Enter name ,id,marks of first student:");
scanf("%s%d%f",s1.name,&s1.id,&s1.marks);
stu s2;
printf("Enter name ,id,marks of second student:");
scanf("%s%d%f",s2.name,&s2.id,&s2.marks);
if(strcmp(s1.name,s2.name)==0){
	printf("names of the two students are matched\n");
}
else if(s1.id==s2.id){
	printf("id's of two students are matched.\n");
}
else if(s1.marks==s2.marks){
	printf("Marks of two students are matched.\n");
}
else{
	printf("No credentials matched.\n");
}
return 0;
}
