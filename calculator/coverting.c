#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    char binary[100], m[30];

    printf("Enter a binary: ");
    scanf("%s", binary);

    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '.')
        {
            int pointPosition = i;
            for (int j = 0; j < pointPosition; j++)
            {
                m[j] = binary[i];
                printf("binary : %s", m[i]);
            }
        }
    }

    return 0;
}