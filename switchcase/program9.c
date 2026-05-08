#include <stdio.h>
int main()
{
    int n;
    printf("Enter number (1-3): ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Invalid");
    }

    return 0;
}
