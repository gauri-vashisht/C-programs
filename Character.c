/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol*/

#include<stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if(65 <= c && 90 >= c)
    {
        printf("\nCapital Letter");
    }
    else if(97 <= c && 122 >= c)
    {
        printf("\nSmall case letter");
    }
    else if(48 <= c && 57 >=c)
    {
        printf("\nDigit");
    }
    else
    {
        printf("\nSpecial Symbol");
    }

    return 0;
}
