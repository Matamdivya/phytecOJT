#include <stdio.h>
int main()
{
	int n,first,last,sum=0,original;
		printf("enter a number:");
		scanf("%d",&n);
		original=n;
	last=n%10;
	sum=sum+last;
	while(n>=10){
		n=n/10;
	}
		first=n;
		sum=sum+first;
		printf("sumof first and last digit of %d is : %d\n",original,sum);
	}
