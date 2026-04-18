#include <stdio.h>
int main()
{
	int num,digit,sum=0,count=0,original;
	printf("enter a number:");
	scanf("%d",&num);
	original=num;
	while(num>0){
		digit=num%10;
		sum=sum+digit;
		num=num/10;
		count++;
	}
	printf("sum of digits of %d is %d.\n",original,sum);
	printf("the number of digits in %d is %d.\n",original,count);
	return 0;
}
