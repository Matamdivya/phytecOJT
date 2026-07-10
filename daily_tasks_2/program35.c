#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next,sum=0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
	sum=sum+a;
        next = a + b;
        a = b;
        b = next;
    }
    printf("sum:%d.\n",sum);

    return 0;
}
