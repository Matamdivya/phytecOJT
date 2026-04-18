#include<stdio.h>
int main()
{
	int num,temp,count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	//positive,negative or zero
	if(num>0)
		printf("Positivr\n");
	else if(num<0)
		printf("Negative\n");
	else
		printf("Zero\n");
	if(num%2==0)
		printf("Even\n");
	else
		printf("Odd\n");
	temp=num;
	if(temp==0)
	{
		count=1;
	}
	else
	{
		if(temp<0)
			temp=-temp;
		while(temp>0)
		{
			temp=temp/10;
			count++;
		}
	}
	printf("Number of digits =%d\n",count);
	if(num%2==0)
		printf("Divisible by 2\n");
	if(num%3==0)
		printf("Divisible by 3\n");
	if(num%5==0)
		printf("Divisible by 5\n");
	return 0;
}

