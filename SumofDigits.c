/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

#include<stdio.h>
int main()
{
    int sum, num, d1, d2, d3, d4, d5;
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
    sum=d1+d2+d3+d4+d5;
    printf("\nSum of digits = %d", sum);
    return 0;
}