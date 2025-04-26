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

	for(int j = n-1 ; j >= 0 ; j--)
		printf("%d ", arr[j]);
		
	return 0;
}