#include <stdio.h>
int main()
{
	int n; int sum=0;
	
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	for(int j = 0 ; j < n ; j++)
		sum += arr[j];
		
    printf("\nSum = %d", sum);
    
	return 0;
}

