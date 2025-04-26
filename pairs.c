#include<stdio.h>
int main()
{
    int n, x, count=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter x: ");
    scanf("%d", &x);

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("\n(%d, %d)", arr[i], arr[j]);
                count++;
            }
        }
    }
    if(count>0)
        printf("\nNumber of pairs that add up to %d = %d", x, count);
    else
        printf("\nNo pairs found that add up to x");
    
    return 0;
}