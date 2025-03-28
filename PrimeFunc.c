//function to check if a number is prime or not

#include <stdio.h>

int primefun(int);
int main()
{
    int num, flag;

    printf("Enter a number: ");       
    scanf("%d", &num);

    flag = primefun(num);

    if(flag==0)
    {
        printf("\nNot Prime");
    }
    else
    {
        printf("\nPrime");
    }

    return 0;
}
int primefun(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }
    for(int i = 2 ; i < (num-1) ; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

