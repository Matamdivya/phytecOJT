#include <stdio.h>
int main()
{
	float salary,bonus;
	int exp;
	printf("Enter Salary: ");
	scanf("%f",&salary);
	printf("Enter Experience(years):");
	scanf("%d",&exp);
	//checking conditions
	if(exp>10 && exp<25)
	{
		bonus=  salary*0.30;
	}
	else if(exp>=5 && exp<=10)
		{
			bonus = salary*0.20;
		}
		else 
		{
			bonus =salary*0.05;
		}
		printf("Bonus = %.2f",bonus);
		return 0;
	}
