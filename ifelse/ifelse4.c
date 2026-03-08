#include<stdio.h>
int main(){
 int a,b;
 printf("Enter two numbers: ");
 scanf("%d%d",&a,&b);
 if(a>b)
  printf("Greater: %d",a);
 else
  printf("Greater: %d",b);
 return 0;
}
