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
    printf("Enter sum that you want: ");
    scanf("%d", &x);

	for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            for(int k = i+2 ; k < n ; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    printf("\n(%d, %d, %d)", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
		
    printf("\nNo of triplets = %d", count);

	return 0;
}

