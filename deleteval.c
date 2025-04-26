#include<stdio.h>
int main()
{
    int n, pos, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be deleted: "); 
    scanf("%d", &x);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            pos=i+1;
            for(int i=pos; i<n; i++)
                arr[i-1]=arr[i];
            for(int i=0; i<n-1; i++)
                printf("%d ", arr[i]);
        }
        else
        {
            printf("\nNo such element exists");
            break;
        }    
    }
    return 0;
}