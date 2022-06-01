#include <stdio.h>

int main()
{
    char c;
    int lowercase_vowel, uppercase_vowel;

    // Ask user to enter an alphabet to check whether it´s vowel or consonant
    // Note enter ALPHABET only
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // If capital and small alphabet is eqaul to AEIOU or aeiou
    if (lowercase_vowel || uppercase_vowel)
    {
        // print that alphabet is vowel
        printf("%c is a vowel. \n", c);
    }
    // If not print ,that alphabet is consonant
    else
    {
        printf("%c is a consonant. \n", c);
    }
    return 0;
}