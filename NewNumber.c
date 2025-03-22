/*If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402. */

#include<stdio.h>
int main()
{
    int new, num, d1, d2, d3, d4, d5;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    d5=num%10; num/=10;
    d4=num%10; num/=10;
    d3=num%10; num/=10;
    d2=num%10; num/=10;
    d1=num%10;
    d1=(d1+1)%10;
    d2=(d2+1)%10;
    d3=(d3+1)%10;
    d4=(d4+1)%10;
    d5=(d5+1)%10;
    new = 10000*d1 + 1000*d2 + 100*d3 + 10*d4 + d5;
    printf("\nNew number = %d", new);
    return 0;
}