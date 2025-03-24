/*Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel*/

#include<stdio.h>

int main()
{
    float hard, cc, ts;

    printf("Enter hardness, carbon content, tensile strength: ");
    scanf("%f%f%f", &hard, &cc, &ts);

    if(hard > 50 && cc < 0.7 && ts > 5600)
    {
        printf("\nGrade 10");
    }
    else if(hard > 50 && cc < 0.7)
    {
        printf("\nGrade 9");
    }
    else if(ts > 5600 && cc < 0.7)
    {
        printf("\nGrade 8");
    }
    else if(hard > 50 && ts > 5600)
    {
        printf("\nGrade 7");
    }
    else if(hard > 50 || cc < 0.7 || ts > 5600)
    {
        printf("\nGrade 6");
    }
    else 
    {
        printf("\nGrade 5");
    }

    return 0;
}