/*Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle. */

#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, rad, m, n, d;

    printf("Enter coordinates of center and radius: ");
    scanf("%f%f%f", &x, &y, &rad);
    printf("Enter a point: ");
    scanf("%f%f", &m, &n);

    d=sqrt(pow((x-m), 2) + pow((y-n), 2));

    if(d>rad)
    {
        printf("\nPoint lies outside the circle");
    }
    else if(d==rad)
    {
        printf("\nPoint lies on the circle");
    }
    else if(d<rad)
    {
        printf("\nPoint lies inside the circle");
    }

    return 0;
}