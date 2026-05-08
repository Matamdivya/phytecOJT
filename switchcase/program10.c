#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    switch(n)
    {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        default: printf("Number not 1 or 2");
    }

    return 0;
}
