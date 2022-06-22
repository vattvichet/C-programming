#include <stdio.h>

int main()
{
    char octalnum[1000];
    long q = 0;

    printf("Enter any octal number here :");
    scanf("%s", octalnum);
    //
    printf("\n Equivalent binary value: ");
    //
    while (octalnum[q])
    {
        switch (octalnum[q])
        {
        case '0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        case '.':
            printf(".");
            break;
        default:
            printf("\n \n %c is not Binary Number \n \n", octalnum[q]);
        }
        q++;
    }

    //
    return 0;
}