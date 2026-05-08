#include <stdio.h>
int main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Uppercase Vowel");
    else
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("Lowercase Vowel");
        else
            printf("Not a vowel");
    }

    return 0;
}
