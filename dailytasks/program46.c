#include<stdio.h>
int main(){
    char str[100];
    int length=0, i;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    printf("the reversed string is:");
    for(i=0; str[i]!='\0'; i++){
        length++;
    }
    for(i=length-1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}
