//cube of a number using functions

#include <stdio.h>

float cube(float);

int main()
{
    float n;

    printf("Enter number: ");
    scanf("%f", &n);

    cube(n);

    printf("\nCube of %f = %f", n, cube(n));
    return 0;
}
float cube(float n)
{
    return(n*n*n);
}

