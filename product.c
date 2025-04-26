#include <stdio.h>
int main()
{
	int n; int prod=1;
	
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	for(int j = 0 ; j < n ; j++)
		prod *= arr[j];
		
    printf("\nProduct = %d", prod);
    
	return 0;
}

