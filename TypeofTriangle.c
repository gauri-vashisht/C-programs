/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
valid or not.*/

#include <stdio.h>

int main()
{
    int s1, s2, s3, l;

    printf("Enter three sides: ");
    scanf("%d%d%d", &s1, &s2, &s3);


    if ( l > s1 + s2 && l > s2 + s3 && l > s3 + s1 )
    {
        printf("\nTriangle Valid");
    }
    else
    {
        printf("\nTriangle invalid");
    }

    return 0;
}