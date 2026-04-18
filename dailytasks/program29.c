#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c,i,sum=0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", a); 
	sum=sum+a;
        c = a + b;          
        a = b;             
        b = c;
    }
printf("sum:%d",sum);
    return 0;
}
