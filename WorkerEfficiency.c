/*If the time taken by the worker is between 2 – 3 hours, then the worker is said to be highly efficient. 
If the time required by the worker is between 3 – 4 hours, then the worker is ordered to improve speed. 
If the time taken is between 4 – 5 hours, the worker is given training to improve his speed, and if the 
time taken by the worker is more than 5 hours, then the worker has to leave the company*/

#include<stdio.h>

int main()
{
    float time;
    
    printf("Enter time taken by worker: ");
    scanf("%f", &time);

    if (time >= 2 && time < 3)
    {
        printf("\nWorker is highly efficient");
    }
    else if (time >= 3 && time < 4)
    {
        printf("\nWorker must improve speed");
    }
    else if (time >= 4 && time < 5)
    {
        printf("\nWorker given training to improve speed");
    }
    else
    {
        printf("\nWorker must leave company");
    }

    return 0;
}