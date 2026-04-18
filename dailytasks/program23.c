#include <stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter three angles:");
	scanf("%d%d%d",&a,&b,&c);
                               //check if sum of angles is 180
	sum=a+b+c;
	if(sum==180 && a>0 && b>0 && c>0){
	printf("Valid Triangle.\n");
	}
	else
	{
		printf("Not a Valid Triangle.\n");
	}
	return 0;
}
