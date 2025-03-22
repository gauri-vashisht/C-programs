/*Write a program to calculate the area & perimeter of the rectangle, and the area &
circumference of the circle. */

#include<stdio.h>
int main()
{
    int l, b, r;
    printf("Enter l, b of rectangle and radius of circle: ");
    scanf("%d%d%d", &l, &b, &r);
    printf("\nRectangle: Area = %d Perimeter = %d", l*b, 2*(l+b));
    printf("\nCircle: Area = %.2f Perimeter = %.2f", 3.14*r*r, 6.28*r);
    return 0;
}