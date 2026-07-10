#include<stdio.h>
int main(){
	int num,rev=0,digit,result;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
		result=rev;
	}
	printf("Reversed number is :%d\n",result);
}

