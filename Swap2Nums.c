/*Two numbers are input through the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D. */

#include <stdio.h>
int main()
{
    int c, d, t;
    printf("Enter two numbers: ");
    scanf("%d%d", &c, &d);
    t = c;
    c = d;
    d = t;
    printf("\nSwapped Numbers = %d and %d", c, d);
    return 0;
}