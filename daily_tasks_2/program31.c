#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	int temp=abs(num);
	int org=num;
	if(num>0){                                  //to check positive/negative/zero.
		printf("%d is positive.\n",num);
	}else if(num<0){
		printf("%d is negative.\n",num);
	}
	else{
		printf("%d is zero.\n",num);
	}
	(num%2==0)?printf("%d is Even.\n",num):printf("%d is Odd.\n",num);
         if(temp==0)
		 count=1;
       while(temp>0){                      //to count the number of digits.

	       int digit=temp%10;
	       count++;
	       temp=temp/10;}
       printf("the number of digits :%d.\n",count);
       if(org%2==0){                       //to check number divisible by 2 or 3 or 5.
	       printf("%d is divisible by 2.\n",num);
       }
       else if(org%3==0){                   
	       printf("%d is divisible by 3.\n",num);
       }
       else if(org%5==0){
	       printf("%d is divisible by 5.\n",num);
       }
       else{
	       return 0;
       }
}
