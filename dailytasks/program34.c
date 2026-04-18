#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    float avg;

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // Calculate sum
    }

    avg = (float)sum / n;

    printf("Average = %f\n", avg);

    printf("Elements greater than average:\n");

    for(i = 0; i < n; i++)
    {
        if(arr[i] > avg)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
