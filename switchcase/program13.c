#include <stdio.h>
int main()
{
    char grade;

    printf("Enter grade (A/B/C/D): ");
    scanf(" %c",&grade);

    switch(grade)
    {
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Pass"); break;
        default: printf("Fail");
    }

    return 0;
}
