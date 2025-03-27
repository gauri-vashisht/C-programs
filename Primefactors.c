//obtain all the prime factors of positive integer 

#include <stdio.h>

void prime(int);

int main()
{
    int num;

    printf("Enter positive integer: ");
    scanf("%d", &num);

    prime(num);

    return 0;
}
void prime(int num) 
{
    for (int i = 2; i <= num; i++) 
    {  
        while (num % i == 0) 
        {  
            printf("%d ", i);
            num /= i;  
        }
    }
}