#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 100) {
        printf("The number is greater than 100.\n");
    }

    return 0;
}
