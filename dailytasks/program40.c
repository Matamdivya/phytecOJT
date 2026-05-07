#include<stdio.h>
int main()
{
	int range,i=1;
	long long fact=1;
	printf("enetr a range:");
	scanf("%d",&range);
	while(i<=range)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial=%lld\n",fact);
	return 0;
}
