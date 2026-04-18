#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    int i;
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // actually read the element
        sum = sum + arr[i]; // add to sum
    }
    
    printf("Sum = %d", sum);
    return 0;
}
