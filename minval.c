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

	int min = arr[0];
	
	for(int j = 0 ; j < n ; j++)
	{
        if(arr[j]<min)
            min = arr[j];
    }
		
    printf("\nMin value = %d", min);
    
	return 0;
}

