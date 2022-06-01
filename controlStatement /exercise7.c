#include <stdio.h>

int main()
{
    char user_response;

    // Enter the user response
    printf("Enter one character : ");
    // Scan the userś input
    scanf("%c", &user_response);
    // Using ASCII table
    // In case userś input is in the range of=[97,122] ,or we can say [a,z] in (lowercase) in decimal or  userś input is in the range of [65,90] ,or we can say [A,Z] in (uppercase).
    if ((user_response >= 'a' && user_response <= 'z') || (user_response >= 'A' && user_response <= 'Z'))
    {
        // print whatever user response, is alphabet.
        printf("'%c' is alphabet. \n", user_response);
    }
    // In case,user input is in the range of =[48,57] or character [0,1] in decimal.
    else if (user_response >= '0' && user_response <= '9')
    {
        // print whatever user response, is digit.
        printf("'%c' is digit. \n", user_response);
    }
    // Besides that, print whatever user response ,is special character.
    else
    {
        printf("'%c' is special character. \n", user_response);
    }

    return 0;
}
