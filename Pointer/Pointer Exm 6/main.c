#include<stdio.h>

int main()
{
    char str[15] = "abcd\"ef\"ghi";

    for ( int i =0; i<15; i++)
    {
        printf("str[%d]: %c \n", i+1, str[i]);
    }

    printf("String size: %d", strlen(str));

    return 0;
}
