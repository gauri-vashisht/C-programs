/*If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item. */

#include<stdio.h>
int main()
{
    int tsp, tp;

    printf("Enter total sp of 15 items and total profit: ");
    scanf("%d%d", &tsp, &tp);
    
    float cp=tsp-tp;
    cp/=15;
    printf("\nCost Price of one item = %.2f", cp);
    return 0;
}