// to check voting critertia
#include<stdio.h>
int main(){
int age;
printf("Enter your age:");
scanf("%d",&age);
if(age>=18){
	printf("congratulations! you are eligible to vote.\n");
}
else if(age<18){
	printf("sorry! your not eligible to vote.\n");
}
else{
	printf("Please entr valid age in years.\n");
}
return 0;
}
