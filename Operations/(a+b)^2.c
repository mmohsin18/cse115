#include<stdio.h>
#include<stdlib.h>

int operation(int, int);

int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);

    c = operation(a,b);
    printf("The value of (a+b)^2 is %d", c);
    return 0;
}

int operation (int x, int y)
{
    int result;
    result = (x+y)*(x+y);
    return result;
}
