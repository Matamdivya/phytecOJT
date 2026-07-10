#include<stdio.h>
int main(){
	int n,first,last,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	int original=n;
	last=n%10;
	sum=sum+last;
	while(n>=10){
		n=n/10;
	}
	first=n;
	sum=sum+first;
	printf("the sum of first and last digits of %d is %d\n",original,sum);
}	
