#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day == 6 || day == 7) {
        printf("Weekend\n");
    }

    return 0;
}
