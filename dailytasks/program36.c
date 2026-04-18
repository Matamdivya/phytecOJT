#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in an array:\n");

    for(i = 0; i < n; i++)
    {
        int num = arr[i];
        int isPrime = 1;

        if(num <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for(j = 2; j <= num / 2; j++)
            {
                if(num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime == 1)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
