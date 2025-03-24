/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not. */

#include<stdio.h>

int main()
{
    int numm, num, d1, d2, d3, d4, d5, rev;
    
    printf("Enter 5 digit number: ");
    scanf("%d", &numm);
   
    num=numm;
    d5=num%10; num/=10;
    d4=num%10; num/=10;
    d3=num%10; num/=10;
    d2=num%10; num/=10;
    d1=num%10;
    rev = 10000*d5 + 1000*d4 + 100*d3 + 10*d2 + d1;
    
    if(rev == numm)
    {    
        printf("\nOriginal and reversed numbers are equal.");
    }
    else
    {
        printf("\nOriginal and reversed numbers are not equal.");
    }
    
    return 0;
}