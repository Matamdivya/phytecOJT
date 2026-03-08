#include<stdio.h>
int main(){
 int n;
 printf("Enter number: ");
 scanf("%d",&n);
 if(n%3==0)
  printf("Divisible by 3");
 else
  printf("Not Divisible by 3");
 return 0;
}
