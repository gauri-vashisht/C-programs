#include<stdio.h>
int main()
{
    int n, x, count=0, flag=1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-1-i])
            flag=0; 
            break;
    }

    if(flag==1)
        printf("\nPalindrome");
    else
        printf("\nNot palindrome");

    return 0;
}
