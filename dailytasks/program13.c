#include<stdio.h>
int main(){
	int num,sum=0,temp=0,digit,original;
	printf("Enter a number:");
	scanf("%d",&num);
	original=num;
	while(num>0){
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	while(sum>9){
		temp=sum;
		sum=0;
		while(temp>0){
			digit=temp%10;
			sum=sum+digit;
			temp=temp/10;
		}
	}
	if(sum==1){
		printf("%d IS MAGIC NUMBER.\n",original);
	}
	else{
		printf("%d IS NOT MAGIC NUMBER.\n",original);
	}
	return 0;
}
