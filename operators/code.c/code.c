#include <stdio.h>
int main() 
{
	int a,b;
	printf("enter two integers :");
	scanf("%d %d",&a,&b);
	printf("addition = %d\n",a+b);
	printf("subtraction = %d\n",a-b);
	printf("multiplication = %d\n",a*b);
	if(b != 0)
	{
		printf("division = %d\n", a/b);
		printf("modulus = %d\n", a%b);
	}
	else
	{
		printf("division and modulus not possible(b=0)\n");
	}
	return 0;
}
