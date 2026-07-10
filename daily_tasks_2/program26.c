//to find whether a number is even or odd using ternary operator
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
        scanf("%d",&num);
        (num%2==0)?printf("%d is EVEN\n",num):printf("%d is ODD\n",num);
return 0;
}
