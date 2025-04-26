#include <stdio.h>
int main()
{
	int n, x, pos;
	printf("Enter no. of elements in array: ");
	scanf("%d", &n);
	int arr[n+1];
	
	for(int i=0; i<n ; i++) {
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]); }
	printf("\nEnter value and position: ");
    scanf("%d%d", &x, &pos); 
	
	//1 2 3 4 5 --> 1 2 10 3 4 5

	for(int i=n-1; i>=pos-1; i--)
		arr[i+1] = arr[i];
	arr[pos-1]=x;
	for(int i=0; i<n+1; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

