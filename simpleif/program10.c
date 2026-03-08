#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("The year is divisible by 4.\n");
    }

    return 0;
}
