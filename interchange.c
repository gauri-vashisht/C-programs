#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<n-1; j+=2)
    {
        int t; 
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
    }
    
    for(int k=0; k<n; k++)
        printf("%d ", arr[k]);

    return 0;
}
