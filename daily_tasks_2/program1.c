#include<stdio.h>
int main(){
	int n,i,result;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=20;i++){
		result=n*i;
		printf(" %d\n",result);}
}

