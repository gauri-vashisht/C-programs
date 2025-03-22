/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.*/

#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &f);
    c = (f-32)*(5/9);
    printf("\nCentigrade Degrees = %.2f", c);
    return 0;
}