#include<stdio.h>
int main(){
	int i,j,row,count=2,space;
	printf("Enter number of row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(space=1;space<=row-i;space++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",count);
			count+=2;
		}
		printf("\n");
	}
}

