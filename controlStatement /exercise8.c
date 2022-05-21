#include <stdio.h>
int main()
{

    char ch;

    /* Input character from user */
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    /* Alphabet check */
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
        if (ch == 'a', 'e', 'i', 'o', 'u')
        {
            printf("It is a vowel");
        }
    }

    else
    {
        printf("That's not the alphabet BRO!! \n");
    }

    return 0;
}