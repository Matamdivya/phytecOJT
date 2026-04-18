#include <stdio.h>
int main()
{
	int num,sum = 0,mul=1,digit;
	printf("enter a number: ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	if(sum==mul)
	{
	
		printf("it is SPY number\n");
	}
	else{
		printf("it is not SPY number\n");
	}
	return 0;
}

