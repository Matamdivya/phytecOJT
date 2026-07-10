//FINDING EVEN OR ODD USING BITWISE OPERATORS.
#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0){
	if(a&1){
		printf("%d is ODD.\n",a);
	}
	else{

		printf("%d is EVEN.\n",a);
	}
	}
	return 0;
}
