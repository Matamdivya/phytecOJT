#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 50) {
        printf("The student has passed.\n");
    }

    return 0;
}
