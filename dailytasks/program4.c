#include <stdio.h>
int main()
{
	int num,rev=0,digit,result;
	printf("enetr a number:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
		result=rev;
	}
	printf("reversed number is : %d\n",result);
}
