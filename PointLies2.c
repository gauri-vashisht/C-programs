/*Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0)*/

#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter a point x, y: ");
    scanf("%d%d", &x, &y);

    if(x == 0 && y != 0)
    {
        printf("\nPoint lies on Y axis");
    }
    else if(y == 0 && x != 0)
    {
        printf("\nPoint lies on X axis");
    }
    else if(y == 0 && x == 0)
    {
        printf("\nPoint is at origin");
    }
    else
    {
        printf("\nPoint doesn't lie on any axis nor origin");
    }

    return 0;
}