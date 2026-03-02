#include<stdio.h>
int main() {
 float a = 1e-38;
 printf("Underflow: %e", a / 1e10);
 return 0;
}
