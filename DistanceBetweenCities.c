/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */

#include<stdio.h>
int main()
{
    float km;
    printf("Enter distance between two cities in km: ");
    scanf("%f", &km);
    printf("\nMeters = %.2f", km*1000);
    printf("\nCentimeters = %.2f", km*100000);
    printf("\nInches = %.2f",  km*100000/2.54);
    printf("\nFeet = %.2f", km*100000/2.54/12);
    return 0;

}