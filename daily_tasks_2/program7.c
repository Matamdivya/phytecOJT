#include<stdio.h>
int main(){
	int num,sqr,digit,sum=0;
	printf("Enter a number:3");
	scanf("%d",&num);
	sqr=num*num;
	while(sqr>0){
		digit=sqr%10;
		sum=sum+digit;
		sqr=sqr/10;
	}
	if(sum==num){
		printf("IT is a neon number\n");
	}
	else{
		printf("It is not a neon number\n");
	}
}

