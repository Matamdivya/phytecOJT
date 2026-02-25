#include <stdio.h>
int main()
{
	int a;
	float b;
	double c;
	char d;
	printf("enter an integer value: ");
	scanf("%d", &a);
	printf("enter a float value: ");
	scanf("%f",&b);
	printf("enter a double value: ");
	scanf("%lf",&c);
	printf("enter a character value: ");
	scanf("%c",&d);
	printf("\nyou entered:\n");
	printf("integer: %d\n",a);
	printf("float: %f\n",b);
	printf("double: %lf\n",c);
	printf("character: %c\n",d);
	return 0;
}

