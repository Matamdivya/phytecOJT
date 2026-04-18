#include <stdio.h>

int main()
{
    int vowels = 0, consonants = 0, spaces = 0;
    char str[100];
    int i;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
        else if(ch == ' ')
        {
            spaces++;
        }
    }

    printf("\nCount of vowels = %d\n", vowels);
    printf("Count of consonants = %d\n", consonants);
    printf("Count of spaces = %d\n", spaces);

    return 0;
}
