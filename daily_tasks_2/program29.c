//to check whether a triangle or not.
#include<stdio.h>
int main(){
	float a,b,c,sum;
	printf("Enter three  angles:");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	if(sum==180){
		printf("congrats!  valid TRIANGLE is formed using your angles.\n");
	}
	else{
		printf("oops! TRIANGLE cannot be formed using your angles.\n");
	}
	return 0;
}
	

