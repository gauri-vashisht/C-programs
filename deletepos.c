#include<stdio.h>
int main()
{
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter position at which value is to be deleted: "); 
    scanf("%d", &pos);
    // 1 2 3 4 5 --> 1 3 4 5
    for(int i=pos; i<n; i++)
        arr[i-1]=arr[i];
    for(int i=0; i<n-1; i++)
        printf("%d ", arr[i]);
    return 0;
}