//increment even index element by 10, multiply odd index element by second multiple

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

	for(int j = 0 ; j < n ; j++)
    {
        if(j % 2 == 0)
            arr[j]+=10;
        else    
            arr[j]*=2;

        printf("%d ", arr[j]);
    }


    
	return 0;
}

