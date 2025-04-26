#include <stdio.h>
int main()
{
	int n;
	
	printf("Enter no. of students: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		printf("Enter marks of student %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	for(int j = 0 ; j < n ; j++)
    {
        if (arr[j] < 35)
		    printf("\nRoll number %d has marks %d ", j, arr[j]);
    }

	return 0;
}