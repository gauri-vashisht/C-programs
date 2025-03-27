//square of a number using functions

#include <stdio.h>

float squar(float);

int main()
{
    float n;

    printf("Enter n: ");
    scanf("%f", &n);

    squar(n);
    printf("\nSquare of %f is = %f", n, squar(n));

    return 0;
}
float squar(float n)
{
    return(n*n);
}
