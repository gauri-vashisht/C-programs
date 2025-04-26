#include <stdio.h>
int main()
{
	int n;
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i=0 ; i<n ; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

    int min=999, smin = 999;

    for(int i=0 ; i<n ; i++)
    {
        if(min>arr[i])
        {
            smin=min;
            min=arr[i];
        }
        else if(smin>arr[i])
            smin=arr[i];
    }
    
    printf("\nSecond smallest elemnent = %d", smin);

    return 0;
}
