#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    //printing the address of a[0] which is 1.
    printf("a[0] at address %d\n",&a[0]);
    printf("p = %d\n",p);

    //printing values using pointer
    printf("p[2] = %d\n", p[1]);
//    *(p+2) = 9;
    printf("p[2] = %d\n", p[2]);
//    p[2] = 8;
    printf("p[2] = %d\n", p[4]);
    return 0;
}
