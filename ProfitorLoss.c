/*If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred. */

#include<stdio.h>

int main()
{
    int cp, sp;

    printf("Enter CP and SP of item: ");
    scanf("%d%d", &cp, &sp);

    if(cp>sp)
    {
        printf("\nLoss = %d", cp-sp);
    }
    else if(cp<sp)
    {
        printf("\nProfit = %d", sp-cp);
    }
    
    return 0;
}