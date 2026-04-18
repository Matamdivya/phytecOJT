#include<stdio.h>
int main()
{
	int start,end,num,temp,rem,sum;
	printf("Enter start and end:");
		scanf("%d %d",&start,&end);
	//loop through range
	for(num=start;num<=end;num++)
	{
		temp=num;
		sum=0;
		//find sum of cubes of digitd
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		//check armstrong number
		if(sum==num)
		{
			printf("%d",num);
		}
	}
	return 0;
}
