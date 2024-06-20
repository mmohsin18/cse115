#include <stdio.h>
#include <stdio.lib>


void Average(int first, int second);

int main() {
    int a,b;
    printf("Enter the first value:");
    scanf("%d", &a);
    printf("Enter the second value:");
    scanf("%d", &b);

    Average(a,b);
    return 0;
}

void Average(first, second)
{
    printf("%f", (first+second)/2.0);
}
