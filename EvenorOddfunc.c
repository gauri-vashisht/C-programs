#include <stdio.h>

int eofun(int);

int main()
{
	int num; int flag;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	flag = eofun(num);

	if (flag == 0)
	{
		printf("\nEven");
	}
	else
	{	
		printf("\nOdd");
	}
}
int eofun(int num)
{
	if (num%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
