/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right angled triangle. 
*/

#include <stdio.h>

int main()
{
    int s1, s2, s3, max, flag=0;

    printf("Enter sides of triangle: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if ( s2 > s1 && s3 > s1)
    {
        max = s2;
    }
    else if ( s3 > s1 && s3 > s2 )
    {
        max = s3;
    }
    else if ( s1 > s2 && s1 > s3 )
    {
        max = s1;
    }

    if ( max == s1)
    {
        if ( s1*s1 == s2*s2 + s3*s3 )
        {
            printf("\nRight Triangle");
        }
    }
    else if ( max == s2)
    {
        if ( s2*s2 == s1*s1 + s3*s3 )
        {
            printf("\nRight Triangle");
        }
    }
    else if ( max == s3)
    {
        if ( s3*s3 == s2*s2 + s1*s1 )
        {
            printf("\nRight Triangle");
        }
    }

    if ( s1 == s2 && s2 == s3)
    {
        printf("\nEquilateral triangle");
    }
    else if ( s1 == s2  || s1 == s3  || s2 == s3 )
    {
        printf("\nIsosceles triangle");
    }
    else if ( s1 != s2 && s2 != s3 )
    {
        printf("\nScalene triangle");
    }
    
    return 0;
}