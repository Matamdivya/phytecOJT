#include<stdio.h>
int main(){
 int n;
 printf("Enter number: ");
 scanf("%d",&n);
 if(n>=1 && n<=100)
  printf("Inside Range");
 else
  printf("Outside Range");
 return 0;
}
