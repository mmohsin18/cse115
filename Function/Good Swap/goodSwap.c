#include<stdio.h>

void swap(int *a, int *b, int *c)
{
     int temp;
     temp=*a;
     *a=*b;
     *b=*c;
     *c=temp;
     return a, b, c;
}
int main()
{
    int x=100;
    int y=0;
    int z=50;
    printf("Main Queue: %d %d %d\n", x,y,z);
    swap(&x,&y,&z);
    printf("Queue moved One place: %d %d %d", x,y,z);

    return 0;
}
