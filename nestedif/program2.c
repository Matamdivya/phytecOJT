#include <stdio.h>
int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if(num>0)
    {
        if(num%2==0)
            printf("Positive Even Number");
        else
            printf("Positive but Odd");
    }
    else
        printf("Not Positive");

    return 0;
}
