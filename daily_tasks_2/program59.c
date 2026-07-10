//to print highest and lowest slaries in structures
#include<stdio.h>
typedef struct employee{
	char name[20];
	float salary;
}sal;
int main(){
	int i;
	sal s[10];
	for(i=0;i<10;i++){
		printf("Enter name of the employee:");
		scanf("%s",s[i].name);
	        printf("Enter salary of the employee:");
		scanf("%f",&s[i].salary);
	}
	float  max=s[0].salary;
	for(i=0;i<10;i++){
		if(s[i].salary>s[0].salary){
			max=s[i].salary;
		}
	}
	printf("%.2f\n",max);
	float  min=s[0].salary;
	for(i=0;i<10;i++){
		if(s[i].salary<s[0].salary){
			min=s[i].salary;
		}
	}
	printf("%.2f\n",min);
}

