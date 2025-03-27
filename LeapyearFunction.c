//write a function to determine whether the year is a leap year or not

#include <stdio.h>

int fun(int);

int main()
{
    int year, flag;

    printf("Enter year: ");
    scanf("%d", &year);

    flag = fun(year);

    if(flag == 1)
        printf("\nLeap year");
    else
        printf("\nNot a leap year");

    return 0;
}
int fun(int year)
{
    int flag;
    
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
        flag=1;
    else
        flag=0;
    
    return(flag);
}