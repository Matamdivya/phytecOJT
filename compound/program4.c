#include <stdio.h>
int main() {
    int a=5;
    a <<= 1;
    printf("Left Shift: %d", a);
    a >>= 1;
    printf("Right Shift: %d", a);
    return 0;
}
