
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<0 || b<0 || c<0)
        printf("At least one Negative");
    else
        printf("No Negative");
    return 0;
}
