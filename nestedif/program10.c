#include <stdio.h>
int main()
{
    int x,y;

    printf("Enter x and y coordinates: ");
    scanf("%d%d",&x,&y);

    if(x>0)
    {
        if(y>0)
            printf("1st Quadrant");
        else
            printf("4th Quadrant");
    }
    else
    {
        if(y>0)
            printf("2nd Quadrant");
        else
            printf("3rd Quadrant");
    }

    return 0;
}
