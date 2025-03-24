/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

#include<stdio.h>

int main()
{
    int y, r, s, a;
    printf("Enter ages of Ram Shyam and Ajay: ");
    scanf("%d%d%d", &r, &s, &a);
    y=r;
    if(s<r && s<a)
    {
        y=s;
        printf("\nShyam is youngest");
    }
    else if(a<r && a<s)
    {
        y=a;
        printf("\nAjay is youngest");
    }
    else 
    {    
        printf("\nRam is youngest");
    }
    return 0;
}