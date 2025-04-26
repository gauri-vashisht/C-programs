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

    int x;

    printf("\nEnter a number: ");
    scanf("%d", &x);

    int flag; 

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]==x)
            printf("\n%d exists in array, index = %d", x, i);
        else
            flag = 0;
    }
    
    if(flag == 0)
        printf("\n%d doesn't exist in array", x);

    return 0;
}

