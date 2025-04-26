#include <stdio.h>
int main()
{
	int n;
	
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

    int brr[n];

    for(int i=0; i<n ; i++)
    {
        brr[i] = arr[n-1-i];
    }

    for(int j = 0; j < n ; j++)
        printf("%d ", brr[j]);

    return 0;
}