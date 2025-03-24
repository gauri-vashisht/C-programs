/*Any integer is input through the keyboard. Write a program to 
find out whether it is an odd number or even number. */

#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x%2==0)
    {
        printf("\nEven");
    }
    else   
    { 
        printf("\nOdd");
    }
        return 0;
}