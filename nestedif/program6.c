#include <stdio.h>
int main()
{
    int m1,m2,m3,total;

    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;

    if(m1>=35 && m2>=35 && m3>=35)
    {
        if(total>=120)
            printf("Pass");
        else
            printf("Fail (Total less than 120)");
    }
    else
        printf("Fail (One subject below 35)");

    return 0;
}
