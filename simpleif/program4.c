#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 0) {
        printf("The number is divisible by 10.\n");
    }

    return 0;
}
