#include<stdio.h>
int main(){
	int num,factor=0,original;
	printf("Enter a number:");
	scanf("%d",&num);
	original=num;
	for(int i=1;i<num;i++){
		if(num%i==0){
			factor=factor+i;
		}
	}
		if(original==factor){
			printf("%d is a perfect number.\n",original);
		}
		else{
			printf("%d is not perfect number.\n",original);
		}
		return 0;
}

	
