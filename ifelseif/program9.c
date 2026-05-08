#include <stdio.h>
int main() {
    int m;
    printf("Enter month number: ");
    scanf("%d",&m);

    if(m==12 || m==1 || m==2)
        printf("Winter");
    else if(m>=3 && m<=5)
        printf("Summer");
    else if(m>=6 && m<=9)
        printf("Monsoon");
    else if(m>=10 && m<=11)
        printf("Autumn");
    else
        printf("Invalid month");

    return 0;
}
