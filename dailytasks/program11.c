#include <stdio.h>
int main()
{
	int a,b,gcd,lcm,i;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=0;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}lcm=(a*b)/gcd;
	printf("Gcd of %d and %d is %d\n",a,b,gcd);
       printf("lcm of %d and %d is %d\n",a,b,lcm);
}       
