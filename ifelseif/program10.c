#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num%2==0)
        printf("Divisible by 2");
    else if(num%3==0)
        printf("Divisible by 3");
    else if(num%5==0)
        printf("Divisible by 5");
    else
        printf("Not divisible by 2,3,5");

    return 0;
}
