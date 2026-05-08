#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three angles: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==90 || b==90 || c==90)
        printf("Right Angled Triangle");
    else
    {
        if(a>90 || b>90 || c>90)
            printf("Obtuse Triangle");
        else
            printf("Acute Triangle");
    }

    return 0;
}
