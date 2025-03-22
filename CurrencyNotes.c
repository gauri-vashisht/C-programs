/*A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer. */

#include<stdio.h>
int main()
{
    int x, n100, n50, n10;
    printf("Enter amount to withdraw: ");
    scanf("%d", &x);
    n100=x/100;
    x%=100;
    n50=x/50;
    x%=50;
    n10=x/10;
    printf("\n100 notes = %d", n100);
    printf("\n50 notes = %d", n50);
    printf("\n10 notes = %d", n10);
    return 0;
}