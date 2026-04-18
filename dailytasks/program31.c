#include <stdio.h>
int main()
{
	int pin=1234,enteredpin,newpin;
	int choice;
	float balance=2000,amount;
	printf("\n---WELCOME TO ATM---\n");
	printf("enter your pin:");
	scanf("%d",&enteredpin);
	if(enteredpin!=pin){
		printf("incorrect PIN!\n");
		return  0;
	}
	printf("PIN verified successfully!\n");
	do{
		printf("\n---ATM MENU---\n");
		printf("1.check balance\n");
		printf("2.withdraw\n");
		printf("3.deposit\n");
		printf("4.changepin\n");
		printf("5.Exit.\n");
		printf("enter your choioce:");
		scanf("%d",&choice);
		switch(choice)
		{
case 1:
			printf("current balance:ruppes%.2f\n",balance);
			break;
case 2:
			printf("enter amount to withdraw:");
			scanf("%f",&amount);
			if(amount<=balance)
			{
				balance-=amount;
				printf("new balance:ruppes%.2f\n",balance);
			}
			else
			{
				printf("insufficient balance!\n");
			}
			break;
case 3:
			printf("enter amount to deposit:");
			scanf("%f",&amount);
			balance +=amount;
			printf("deposit successful!\n");
			printf("new balance:ruppes%2f\n",balance);
			break;
case 4:
			printf("Enter your new pin:");
			scanf("%d",&newpin);
			newpin=pin;
			printf("pin changed successfull.\n");
case 5:
			printf("thank you for using ATM!\n");
			break;
			default:
			printf("invalid choice!\n");
		}
	}while(choice!=5);
	return 0;
}




