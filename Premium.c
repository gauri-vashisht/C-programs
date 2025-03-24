/*Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured. */

#include<stdio.h>

int main()
{
    char health, live, gender;
    int age;

    printf("Enter age: ");
    scanf("%d", &age); fflush(stdin);
    printf("Is health poor or excellent? p/e: ");
    scanf("%c", &health); fflush(stdin);
    printf("Live in city or village? c/v: ");
    scanf("%c", &live); fflush(stdin);
    printf("Gender? f/m: ");
    scanf("%c", &gender); fflush(stdin);

    if(health=='e' && age >= 25 && age <= 35 && live == 'c' && gender == 'm')
    {    
        printf("\nPerson is insured.\nPremium is Rs 4 per thousand.\nMax amount 2 lakhs");
    }
    else if(health=='e' && age >= 25 && age <= 35 && live == 'c' && gender == 'f')
    {
        printf("\nPerson is insured.\nPremium is Rs 3 per thousand.\nMax amount 1 lakh");
    }
    else if(health=='p' && age >= 25 && age <= 35 && live == 'v' && gender == 'm')
    {
        printf("\nPerson is insured.\nPremium is Rs 6 per thousand.\nMax amount 10000");
    }
    else
    {
        printf("\nPerson is not insured");
    }

    return 0;
}