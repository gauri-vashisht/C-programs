/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */

#include<stdio.h>
int main()
{
    int bs;
    printf("Enter Ramesh's basic salary: ");
    scanf("%d", &bs);
    int gs=(0.4*bs) + (0.2*bs);
    printf("Gross Salary = %d", gs);
    return 0;
}