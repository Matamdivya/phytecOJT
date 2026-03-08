
#include <stdio.h>
int main(){
    char ch1,ch2;
    scanf(" %c %c",&ch1,&ch2);
    if(ch1==ch2)
        printf("Equal");
    else if(ch1>ch2)
        printf("First is greater");
    else
        printf("Second is greater");
    return 0;
}
