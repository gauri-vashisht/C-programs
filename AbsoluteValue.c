/*Find the absolute value of a number entered
through the keyboard*/

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>=0)
    {
        printf("\nAbsolute value = %d", num);
    }
    else
    {
        printf("\nAbsolute value = %d", -1*num);
    }
    
    return 0;
}