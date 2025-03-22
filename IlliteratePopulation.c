/*In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number 
of illiterate men and women if the population of the town is 
80,000. */

#include<stdio.h>
int main()
{
    int w, m, lm, lw;
    w=0.48*80000;
    m=0.52*80000;
    lm=0.35*80000;
    lw=0.13*80000;
    printf("\nIlliterate Women = %d", w-lw);
    printf("\nIlliterate Men = %d", m-lm);
    return 0;
}