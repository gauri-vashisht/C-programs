/*The policy followed by a company to process customer orders
is given by the following rules: */

#include<stdio.h>

int main()
{
    int ni, s;
    char cred;

    printf("Enter company stock: ");
    scanf("%d", &s); fflush(stdin);
    printf("Enter no. of items to order: ");
    scanf("%d", &ni); fflush(stdin);
    printf("Is customer's credit OK? y/n: ");
    scanf("%c", &cred); fflush(stdin);

    if (ni <= s && cred == 'y')
    {
        printf("\nSupply %d items", ni);
    }
    else if (cred == 'n')
    {
        printf("\nCredit is not OK hence we will not supply");
    }
    else if (cred == 'y' && ni > s)
    {
        printf("\nSupply %d items and ship the remaining %d", s, ni-s);
    }

    return 0;
}