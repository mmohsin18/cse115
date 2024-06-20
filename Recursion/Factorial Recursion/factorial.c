#include <stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }else
    {
        return n*fact(n-1);
    }
}


int main() {
    printf("Calculate the factorial value of:");
    int n, r;
    scanf("%d", &n);
    r = fact(n);
    printf("The factorial of %d is %d", n,r);

    return 0;
}
