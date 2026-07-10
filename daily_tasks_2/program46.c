//SALARY (INCREMENT & DECREMENT)
#include<stdio.h>
int main(){
	float salary;
	printf("Enter your salary:");
	scanf("%f",&salary);
	salary=salary+(salary*15/100);
	printf("SALARY INCLUDING INCREMENT AFTER FIRST MONTH:%.2f\n",salary);
	salary=salary-(salary*5/100);
	printf("SALARY INCLUDING DECREMENT AFTER SECOND MONTH:%.2F\n",salary);
	return 0;
}
