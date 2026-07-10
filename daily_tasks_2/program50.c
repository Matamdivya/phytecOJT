//swapping two numbers
#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	printf("BEFORE SWAPPING :%d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("AFTER SWAPPING:%d %d\n",a,b);

	return 0;
}
