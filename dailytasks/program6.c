#include <stdio.h>
int main()
{
	int i,n,sum=0,count=0;
	printf("enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			count++;
		}
}
printf("count is: %d\n",count);
printf("sum of the factors is : %d\n",sum);
return 0;
}
