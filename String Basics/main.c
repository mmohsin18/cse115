#include <stdio.h>
#include <stdlib.h>

int main()
{
    char user_name[] = "";

    printf("Enter a username: ");
    gets(user_name);
    printf("%s", user_name);
    return 0;
}
