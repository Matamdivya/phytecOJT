#include<stdio.h>
int main(){
        int num,sum=0,mul=1,digit;
        printf("Enter a number:");
        scanf("%d",&num);
        while(num>0){
                digit=num%10;
                sum=sum+digit;
                mul=mul*digit;
                num=num/10;
        }
        if(sum==mul){
                printf("It is SPY number\n");
        }
        else{
                printf("It is not SPY number\n");
        }
        return 0;
}
