//calculate any number raised to power n

#include <stdio.h>

float expo(float, int);

int main()
{
    float num; 
    int n;

    printf("Enter number and n: ");
    scanf("%f%d", &num, &n);

    expo(num, n);

    printf("\nAnswer = %f", expo(num,n));
    return 0;
}
float expo(float num, int n)
{
    float ans=1; 

    for(int i=0 ; i<n ; i++)
    {
        ans*=num;
    }

    return(ans);
}
