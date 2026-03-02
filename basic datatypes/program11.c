#include<stdio.h>
#include<limits.h>
int main() {
 int a = INT_MAX;
 printf("After overflow: %d", a + 1);
 return 0;
}
