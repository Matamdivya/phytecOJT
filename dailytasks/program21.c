#include <stdio.h>
int main()
{
	int month;
	printf("enter month number (1-12: ");
	scanf("%d",&month);
	switch (month){ //insted of using many if else statements 
case 12:
case 1:
case 2:
	printf("Winter season");
		break;
case 6:
case 7:
case 8:
case 9:
	printf("Rainy season");
	break;
case 10:
case 11:
	printf("Autumn season");
	break;
default:
	printf("Invalid month"); // if the input is not 1-12
	}
	return 0;
}
	


