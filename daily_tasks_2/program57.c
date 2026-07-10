// to print students marks in asscending order in sturcters
#include<stdio.h>
typedef struct student{
	char name[10];
	float marks;
}stu;
int main(){
	stu s[10],temp;
	for(int i=0;i<10;i++){
		printf("Enter name of student:");
		scanf("%s",s[i].name);
		printf("Enter marks of student:");
		scanf("%f",&s[i].marks);
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(s[i].marks>s[j].marks){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\nMarks of stuednts in asscending order:");
	for(int i=0;i<10;i++){
		printf(" %s - %.2f\n ",s[i].name,s[i].marks);
	}
	return 0;
}

