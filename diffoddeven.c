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

    int sume = 0, sumo = 0;
	for(int j = 0 ; j < n ; j++)
	{
        if(j % 2 == 0)
            sume+=arr[j];
        else    
            sumo+=arr[j];
    }

    printf("Difference of sum of elements at even index - odd index = %d", sume-sumo);
		
	return 0;
}

