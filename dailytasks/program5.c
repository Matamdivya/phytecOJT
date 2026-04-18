#include<stdio.h>
int main(){
	char choice;
	float num1,num2,result;
	printf("Enter your choice(+,-*,/):");
	scanf("%c",&choice);
	printf("Enter two numbers:");
	scanf("%f%f",&num1,&num2);
	switch(choice){
		case '+':
			result=num1+num2;
			printf("%.2f",result);
			break;
		case '-':
			if(num1>num2){
				result=num1-num2;
				printf("%.2f",result);
				}
			else{
				result=num2-num1;
				printf("%.2f",result);
			}
			break;
		case'*':
			result=num1*num2;
			printf("%.2f",result);
			break;
		case'/':
			if(num2==0){
				printf("divisibility is not applicable for 0");
			}
			else{
				result=num1/num2;
				printf("%.2f",result);
			}
			break;
		default:
			printf("INVALID CHOICE");
	}
}
