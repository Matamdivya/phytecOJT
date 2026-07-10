#include<stdio.h>
int main(){
	int start,end,range,num,temp,rem,sum;
	printf("Enter start and end values:");
	scanf("%d%d",&start,&end);
	for(num=start;num<=end;num++){
		temp=num;
		sum=0;
		while(temp>0){
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==num){
			printf("amstrong number are:%d.\n",num);}
	}
}
