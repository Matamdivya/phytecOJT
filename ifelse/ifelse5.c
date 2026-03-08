#include<stdio.h>
int main(){
 char ch;
 printf("Enter character: ");
 scanf(" %c",&ch);
 if(ch>='A' && ch<='Z')
  printf("Uppercase");
 else
  printf("Lowercase");
 return 0;
}
