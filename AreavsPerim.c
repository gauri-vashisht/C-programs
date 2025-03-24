/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. */

#include<stdio.h>

int main()
{
    int l, b, a, p;

    printf("Enter length and breadth: ");
    scanf("%d%d", &l, &b);

    a = l*b;
    p = 2*(l+b);

    if(a>p)
    {
        printf("\nArea is greater than perimeter.");
    }
    else if(p>a)
    {
        printf("\nPerimeter is greater than area");
    }
    else if(p==a)
    {
        printf("\nPerimeter = area");
    }    

    return 0;
}