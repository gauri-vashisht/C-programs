/*A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled*/

#include<stdio.h>

int main()
{
    int day, fine;
    
    printf("Enter no. of days late: ");
    scanf("%d", &day);

    if(day >= 5)
    {
        printf("\nFine = 50 paise");
    }
    else if(day <= 6 && day >= 10)
    {
        printf("\nFine = 1 rupee");
    }
    else if(day > 10)
    {
        printf("\nFine = 5 rupee");
    }
    else if(day > 30)
    {
        printf("\nMembership cancel");
    }
    
    return 0;
}