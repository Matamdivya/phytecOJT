//finding seasons using swtich case.
#include<stdio.h>
int main(){
int month;
	printf("enter a month(1-12):");
	scanf("%d",&month);
	switch(month){
		case 12:
	        case 1:
	        case 2:
		printf("Winter season.\n");
		break;
		case 3:
		case 4:
		case 5:
		printf("Summer season.\n");
		break;
		case 6:
		case 7:
		case 8:
		printf("Rainy season.\n");
		break;
		case 9:
		case 10:
		case 11:
		printf("Autumn season.\n");
		break;
		default:
		printf("INVALID MONTH.\n");
		return 0;
	}
}

