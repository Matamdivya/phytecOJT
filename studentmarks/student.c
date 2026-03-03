#include <stdio.h>
#define STUDENTS 20
#define SUBJECTS 6
int main()
{
    int marks[STUDENTS][SUBJECTS];
    int roll[STUDENTS];
    char branch[STUDENTS][30];
    float total[STUDENTS], average[STUDENTS];
    int i, j;
    for(i = 0; i < STUDENTS; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Branch: ");
        scanf("%s", branch[i]);
        total[i] = 0;
        printf("Enter marks for 6 subjects:\n");
        for(j = 0; j < SUBJECTS; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        average[i] = total[i] / SUBJECTS;
    }
    printf("\n================ STUDENT MARKS TABLE ================\n");
    printf("---------------------------------------------------------------\n");
    printf("Roll  Branch     S1   S2   S3   S4   S5   S6   Total   Avg   Result\n");
    printf("---------------------------------------------------------------\n");
    for(i = 0; i < STUDENTS; i++)
    {
        printf("%-5d %-10s ", roll[i], branch[i]);
        for(j = 0; j < SUBJECTS; j++)
        {
            printf("%-4d ", marks[i][j]);
        }
        printf("%-7.0f %-6.2f ", total[i], average[i]);
        if(average[i] >= 60)
            printf("First Class");
        else if(average[i] >= 50)
            printf("Second Class");
        else if(average[i] >= 35)
            printf("Third Class");
        else
            printf("Fail");
        printf("\n");
    }
    return 0;
}
