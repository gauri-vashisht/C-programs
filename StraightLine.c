/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line. */

#include<stdio.h>

int main()
{
    int x1, x2, y1, y2, x3, y3, slope1, slope2;
    
    printf("Enter x1, y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter x2, y2: ");
    scanf("%d%d", &x2, &y2);

    printf("Enter x3, y3: ");
    scanf("%d%d", &x3, &y3);

    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    if(slope1 == slope2)
    {
        printf("\nPoints lie on same line");
    }
    else
    {
        printf("\nPoints do not lie on same line");
    }
    
    return 0;
}