/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

#include <stdio.h>
int main()
{
    int rev, num, d1, d2, d3, d4, d5;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    d5=num%10;
    num/=10;
    d4=num%10;
    num/=10;
    d3=num%10;
    num/=10;
    d2=num%10;
    num/=10;
    d1=num%10;
    rev = 10000*d5 + 1000*d4 + 100*d3 + 10*d2 + d1;
    printf("\nReversed number = %d", rev);
    return 0;
}