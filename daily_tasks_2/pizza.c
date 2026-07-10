//pizza order system
#include<stdio.h>
int main(){
	int choice;
	printf("\nhello welcome to pizza world.\n");
	printf("1.VEG\n");
	printf("2.NON VEG\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			int pick;
			printf("1.paneer(small)--------ruppes:150\n");
			printf("2.mushroom(medium)-----rupees:220\n");
			printf("3.mixed(large)---------ruppes:350\n");
			printf("4.Exit.\n");
			printf("Enter your choice:");
			scanf("%d",&pick);
			switch(pick){
				case 1:
					printf("here is your yummy paneer pizza .\n");
					break;
				case 2:
					printf("Here is your yummy mushroom pizza.\n");
					break;
				case 3:
					printf("Here is your yummy mixed pizza.\n");
					break;
			     	case 4:
					printf("Exiting----\n");
					break;
				default:
					printf("Invalid choice.\n");
					break;

			}
			break;
		case 2:
			int pick2;
			printf("1.chiken(Small)------ruppes:170\n");
			printf("2.prawn(Medium)------rupppes:250\n");
			printf("3.mixed(large)-------rupees:400\n");
			printf("4.Exit.\n");
			printf("Enter your choice:");
			scanf("%d",&pick2);
			switch(pick2){
				case 1:
					printf("Here is your yummy chiken pizza.\n");
				       break;
				case 2:
			                printf("Here is your yummy prawns pizza.\n");
			               break;
				 case 3:
				       printf("Here is your yummy mixed pizza.\n");
				       break;
				 case 4:
				       printf("Exiting-----\n");
				       break;
				 deafult:
				       printf("Invalid choice.\n");
				       break;
			}
			break;
		case 3:
			printf("Exiting----\n");
			break;
		default:
			printf("Invalid choice.\n");
			break;
	}
	return 0;
}




