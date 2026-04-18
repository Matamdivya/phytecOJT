#include <stdio.h>
int main()
{
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	//check votig eligibility
	if (age>=18)
	{
		printf("you are eligible for vote");
	}
	else {
		printf("you are not eligible to vote");
	}
	return 0;
}
