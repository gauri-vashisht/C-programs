#include <stdio.h>

int maxfun(int, int);
int minfun(int, int);

int main()
{
	int a, b, maxx, minn;

	printf("enter a and b: ");
	scanf("%d%d", &a, &b);

	maxx = maxfun(a, b);
	minn = minfun(a, b);

	printf("\nMaximum = %d", maxx);
	printf("\nMinimum = %d", minn);

	return 0;
}
int maxfun(int a, int b)
{
	int max = a;
	
	if(b>a)
		max = b;
	return max;
}
int minfun(int a, int b)
{
	int min = a;
	
	if(b<a)
		min = b;
	return min;
}
	