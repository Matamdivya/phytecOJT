#include <stdio.h>
#include <math.h>
int main()
{
	int num, original, remainder, count = 0;
	int sum  = 0;
	printf("enter a number : " );
	scanf("%d", &num);
	original = num;
	int temp = num;
	while(temp !=0)
	{
		remainder = temp %10;
		sum = sum + pow (remainder,count);
		temp = temp/10;
	}
	if(sum == original)
		printf("%d is an armstrong number\n",original);
	else
		printf("d% is NOT an armstrong number\n", original);
	return 0;
}


