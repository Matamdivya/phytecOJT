//to seperate alphabets ,numbers and sepcial chacters from input
#include<stdio.h>
int main(){
	int i;
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	printf("\nAlphabtes:");
	for(i=0;str[i]!='\0';i++){
		if((str[i]>='A' && str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){
			printf("%c ",str[i]);
		}
	}
	printf("\n");
	printf("Numbers:");
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='0' && str[i]<='9'){
			printf("%c ",str[i]);
		}
	}
	printf("\n");
	printf("Special charcters:");
	for(i=0;str[i]!='\0';i++){
		if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0'&& str[i]<='9'))){

			printf("%c ",str[i]);
		}
	}
	printf("\n");
		return 0;
}
