#include <stdio.h>
int main() {
    int a=5, b=3;
    a &= b;
    printf("a &= b: %d", a);
    a = 5;
    a |= b;
    printf("a |= b: %d", a);
    a = 5;
    a ^= b;
    printf("a ^= b: %d", a);
    return 0;
}
