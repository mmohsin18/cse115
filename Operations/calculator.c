#include<stdio.h>

int add (int, int);
int difference (int, int);
int multiply (int, int);
float divide (int, int);

main()
{
    int a,b,c;
    float d;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("\n\n");
    //We are pushing a and b parameters into the function and the function is storing them into x and y
    c = add(a,b);
    printf("The addition of %d and %d is %d\n", a,b,c);

    c = difference(a,b);
    printf("The difference of %d and %d is %d\n", a,b,c);

    c = multiply(a,b);
    printf("The multiplication of %d and %d is %d\n", a,b,c);

    d = divide(a,b);
    printf("The division of %d and %d is %.2f\n", a,b,d);
}

int add(int x, int y)
{
    int result;
    result =x+y;
    return result;
}

int difference(int x, int y)
{
    int result;
    result =x-y;
    return result;
}

int multiply(int x, int y)
{
    int result;
    result =x*y;
    return result;
}

float divide(int x, int y)
{
    float result;
    if (x>0 && y>0){
        result =x/y;
    } else{
        result=0;
    }
    return result;
}
