#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter the value of x: \n");
    scanf("%d", &x);
    printf("Enter the value of y: \n");
    scanf("%d", &y);

    z=x+y;
    printf("The sum of %d and %d is %d \n", x,y,z);
    z=x-y;
    printf("The subtraction of %d and %d is %d \n", x,y,z);
    z=x*y;
    printf("The multiplication of %d and %d is %d \n", x,y,z);
    z=x/y;
    printf("The division of %d and %d is %d \n", x,y,z);
    z=x%y;
    printf("The modulas of %d and %d is %d \n", x,y,z);
    z=x++;
    printf("The increment of %d is %d \n", z,x);
    z=y--;
    printf("The decrement of %d is %d \n", z,y);
    return 0;
}
