#include <stdio.h>

int main() {
    int rows, i, j;
    int odd_num = 1; // Start with the first odd number

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {

        // Inner loop 2: Prints the odd number (2*i - 1) times in row 'i'
        for (j = 1; j <=i); j++) {
            printf("%d", odd_num);

        odd_num += 2; // Move to the next odd number for the next row
    }
    }
    printf("\n");

    return 0;
}
