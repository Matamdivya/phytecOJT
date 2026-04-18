#include <stdio.h> 
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d", &num);
	//ternary operator:
	//if num % 2 == 0(print "even")
	//else (printf "odd")
	(num % 2==0)? printf("EVEN"): printf("ODD");
	return 0;
}

