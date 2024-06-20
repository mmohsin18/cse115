#include <stdio.h>
#include <stdlib.h>

int is_prime(int a);

int main()
{
    int n;
    printf("Enter the integer:");
    scanf("%d", &n);

    if(is_prime(n) == 1)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
    return 0;
}

int is_prime(int a)
{
    int i;
    for(i=2; i<a ; i++)
    {
        if(a%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
