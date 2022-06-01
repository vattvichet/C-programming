#include <stdio.h>
void main()
{

    int computer_number, guess;
    guess = 0;
    computer_number = 50;

    printf("guess number of computer_number!\n");
    while (guess != computer_number)
    {
        scanf("%d", &guess);
        if (guess == computer_number)
        {
            printf("Well done,you took [count] attempts. \n", guess);
        }
        else if (guess > computer_number)
        {
            printf("Your guess is to high!\n", guess);
        }
        else
        {
            printf("Your guess is to low!\n", guess);
        }
    }
    printf("Thank you!!");
}
