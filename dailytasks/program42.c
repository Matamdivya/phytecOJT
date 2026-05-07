#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // FIX: & is required
    }

    printf("Duplicate elements are: ");

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Print only if duplicate and print once
        if(count > 1) {
            int alreadyPrinted = 0;

            for(int k = 0; k < i; k++) {
                if(arr[i] == arr[k]) {
                    alreadyPrinted = 1;
                    break;
                }
            }

            if(!alreadyPrinted) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
