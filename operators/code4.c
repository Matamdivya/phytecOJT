#include <stdio.h>
#include <math.h>
int main()
{
	float P, R, T, CI,Amount;
	printf("enter principal: ");
	scanf("%f", &P);
	printf("enter Rate: ");
	scanf("%f", &R);
	printf("enter Time(in years): ");
	scanf("%f", &T);
	Amount = P*pow((1 + R/100),T);
	CI = Amount - P;
	printf("Compund Interest = %.2f\n", CI);
	return 0;
}


