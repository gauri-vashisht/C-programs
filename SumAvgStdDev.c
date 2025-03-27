//Receive 5 integers and output sum, average and standard deviation

#include <stdio.h>
#include <math.h>

int sumfun(int, int, int, int, int);
float avgfun(int);
float stdfun(int, int, int, int, int, float);


int main()
{
    int n1, n2, n3, n4, n5, sum;
    float avg, stdev;

    printf("Enter 5 ints: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    sum = sumfun(n1, n2, n3, n4, n5);
    avg = avgfun(sum);
    stdev = stdfun(n1, n2, n3, n4, n5, avg);

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);
    printf("\nStd Devn = %.2f", stdev);
 
    return 0;
}
int sumfun(int n1, int n2, int n3, int n4, int n5)
{
    int sum = n1+n2+n3+n4+n5;
    return(sum);
}
float avgfun(int sum)
{
    return sum/5.0;
}
float stdfun(int n1, int n2, int n3, int n4, int n5, float avg) 
{
    float variance, sums;

    sums = (pow(n1 - avg, 2) + pow(n2 - avg, 2) + pow(n3 - avg, 2) + pow(n4 - avg, 2) + pow(n5 - avg, 2));

    variance = sums/4;  // Sample standard deviation (N-1)

    return sqrt(variance);  // Standard deviation
}





