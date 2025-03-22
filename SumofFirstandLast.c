/*If a four digit number is input through the 
keyboard, write a program to obtain the sum of 
the first and last digit*/

#include <stdio.h>
int main()
{
    int num, d1, d4;
    printf("Enter 4 digit number: ");
    scanf("%d", &num);
    d1=num%10;
    num/=1000;
    d4=num%10;
    printf("Sum of first and last digit = %d", d1+d4);
    return 0;
}