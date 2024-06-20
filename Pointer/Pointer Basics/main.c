#include <stdio.h>
#include <stdlib.h>


int main()
{
    int var = 5000;
    int *ptr;
    int **pptr;

    ptr = &var;

    pptr = &ptr;

    printf("Value of var = %d \n", var);
    printf("Value of *ptr = %d \n", *ptr);
    printf("Value of **pptr = %d \n", **pptr);

    return 0;
}
