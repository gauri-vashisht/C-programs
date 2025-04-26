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

    int x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

	for(int j = 0 ; j < n ; j++)
	{
		if(arr[j]>x)
            count++;
    }
    printf("\nNo of elements greater than %d = %d", x, count);
    
	return 0;
}

