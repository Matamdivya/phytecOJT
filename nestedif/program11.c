#include <stdio.h>
int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if(num>=0)
    {
        if(num%2==0)
            printf("Positive Even");
        else
            printf("Positive Odd");
    }
    else
    {
        if(num%2==0)
            printf("Negative Even");
        else
            printf("Negative Odd");
    }

    return 0;
}
