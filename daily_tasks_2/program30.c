#include<stdio.h>
int main(){
	float salary,bonus=0;
	int experiance;
	printf("Enter your salary:");
	scanf("%f",&salary);
	printf("Enter your experiance:");
	scanf("%d",&experiance);
	if(experiance>10 && experiance<25){
		bonus=salary*0.3;
	}
	else if(experiance>=5 && experiance<=10){
		bonus=salary*0.2;i
	}
	else{
		bonus=salary*0.05;
	}
	printf("you are bonus amount is:%.2f\n",bonus);
	return 0;
}

