#include <stdio.h>
int main()
{
    int age;
    float salary;

    printf("Enter age and salary: ");
    scanf("%d%f",&age,&salary);

    if(age>21)
    {
        if(salary>25000)
            printf("Eligible for Loan");
        else
            printf("Salary too low");
    }
    else
        printf("Age not eligible");

    return 0;
}
