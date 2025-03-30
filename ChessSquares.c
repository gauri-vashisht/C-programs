//determine the number of black cells in a nxn chessboard
//n is even 2 <= n <= 100

#include <stdio.h>

int black(int);

int main()
{
    int n, b;

    printf("Enter n: ");
    scanf("%d", &n);

    b = black(n);

    printf("\nNo of black cells = %d", b); 

    return 0;
}
int black(int n)
{
    return n*n/2 ;
}