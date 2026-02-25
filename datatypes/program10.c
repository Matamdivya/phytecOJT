#include <stdio.h>
int main()
{
	double radius,area;
	printf("enter radius of circle: ");
	scanf("%lf", &radius);
	area = 3.14159 * radius * radius;
	printf("area of a circle = %.4lf\n" , area);
	return 0;
}
