#include<stdio.h>
int main()
{
	int n,square,sum=0,digit;
	printf("enter a number:");
	scanf("%d",&n);
	square = n * n;
	while(square>0)
	{
		digit= square % 10;
	       sum +=digit;
       square = square/10;
	}
 if(sum ==n)
 printf("neon number");
 else
	 printf("not a neon number");
 return 0;
}

