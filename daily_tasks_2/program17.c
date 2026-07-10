#include<stdio.h>
int main(){
	int num,rev=0,digit,original;
	printf("Enter a number:");
	scanf("%d",&num);
	original=num;
	while(num>0){
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	if(original==rev){
		printf("the original  number and the result after reversing it equal.\n");
	}
	else{
	if(original>rev){
		printf("the original number is greater than the reslt after reversing it.\n");
	}
	else{
		printf("the original number is less than the result after reversing it.\n");
	}
	}
	return 0;
}
