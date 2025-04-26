#include <stdio.h>
int main()
{
	int n, flag;
	
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

    // 1 2 3 4 1 2 3 

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("\nDuplicate exists of %d", arr[i]);
                flag=1;
            }      
        }
    }
    if(flag==0)
        printf("\nNo duplicated elements");

    return 0;
}

