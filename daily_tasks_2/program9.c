#include<stdio.h>
int main(){
	int base,exp;
	long long int result=1;
	printf("Enter base number:");
	scanf("%d",&base);
	printf("Enter exponent number:");
	scanf("%d",&exp);
	for(int i=1;i<=exp;i++){
		result=result*base;
	}
	printf("the power of the given number is:%.lld\n",result);
return 0;
}
