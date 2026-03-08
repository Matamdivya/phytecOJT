
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1 || n>100)
        printf("Outside range");
    else
        printf("Within range");
    return 0;
}
