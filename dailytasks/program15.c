#include <stdio.h>
int main()
{
	int num,factor=0,i;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0)
		{
			factor=factor+i;
		}
	}
	printf("the sum of the factors of %d is %d\n",num,factor);
	return 0;
}
