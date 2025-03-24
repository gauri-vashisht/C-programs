/*Write a program to receive marks in A and B and Output
whether the student has passed, failed or is allowed to
reappear in B. */

#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter marks in main subject and subsidiary subject: ");
    scanf("%d%d", &a, &b);

    if (a >= 55 && b >= 45)
    {
        printf("\nPassed");
    }
    else if (a >= 45 && a <= 55 && b >=45)
    {
        printf("\nPassed");
    }
    else if (b <= 45 && a >=65)
    {
        printf("\nReappear in subsidiary subject");
    }
    else
    {
        printf("\nFailed.");
    }
    
    return 0;
}