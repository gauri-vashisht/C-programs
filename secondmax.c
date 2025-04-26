#include <stdio.h>
int main()
{
	int n, max = -999, smax = -999;
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	int arr[n];

	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<n; i++)
    {
        if(max<arr[i]) 
        {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i])
            smax=arr[i];
    } 
    printf("\nSecond largest value = %d", smax);
    
	return 0;
}