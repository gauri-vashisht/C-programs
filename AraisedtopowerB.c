//a raised to the power b

#include <stdio.h>

int poww(int, int);

int main()
{
    int a, b;

    printf("Enter number and power: ");
    scanf("%d%d", &a, &b);

    poww(a, b);

    printf("\n%d raised to power %d = %d", a, b, poww(a,b));

    return 0;
}
int poww(int a, int b)
{
    int ans = 1;

    for(int i=0 ; i<b ; i++)
    {
        ans*=a;
    }

    return(ans);
}
