#include<stdio.h>
void badSwap(int a, int b, int c)
{
     int temp;
     temp=a;
     a=b;
     b=c;
     c=temp;
     return a, b, c;
}
int main()
{
    int x=100;
    int y=0;
    int z=50;
    printf("\t %d %d %d\n", x,y,z);
    badSwap(x,y,z);
    printf("\t %d %d %d", x,y,z);

    printf("\n\n!! No values Changed !!");

    return 0;
}
