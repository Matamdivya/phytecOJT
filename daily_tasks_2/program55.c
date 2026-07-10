//arthmatic operations using functions
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divi(int a,int b);
int main() {
    int x,y;
    char ch;
    do{
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("%d\n",add(x,y));
    printf("%d\n",sub(x,y));
    printf("%d\n",mul(x,y));
    printf("%d\n",divi(x,y));
    printf("Do you want to continue:(y/n)");
    scanf(" %c",&ch);
    }while(ch=='y');
}
int add(int a,int b){
    return (a+b);
}
int sub(int a,int b){
    return (a-b);
}
int mul(int a, int b){
    return (a*b);
}
int divi(int a,int b){
    if(b==0){
        printf("division by zero is not accepted.\n");
    }
    else{
        return (a/b);
    }
}
