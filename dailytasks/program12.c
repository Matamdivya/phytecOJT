#include<stdio.h>
int main(){
	int num,sum=0,d;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0){
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	while(sum>9){
		int temp=sum;
		sum=0;
		while(temp>0){
		      d=temp%10;
		      sum=sum+d;
		      temp=temp/10;
		}
		printf("sum of the digits is:%d\n",sum);
		return 0;
	}
}
