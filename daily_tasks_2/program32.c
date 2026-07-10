#include<stdio.h>
int main(){
	int range;
	printf("Enter range:");
	scanf("%d",&range);
	printf("Even numbers:");
	for(int i=1;i<=range;i++){
		if(i%2==0){
			printf("%d",i);
		}
	}
}

