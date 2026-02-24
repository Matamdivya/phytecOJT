#include <stdio.h>
int main ()
{
	float p,r,t,si;
	printf("enter principle amount : ");
	scanf("%f",&p);
	printf("enter rate of interest : ");
	scanf("%f",&r);
	printf("enter time (in years):");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest = %.2f",si);
	return 0;
}
