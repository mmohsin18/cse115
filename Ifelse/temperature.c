#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    printf("Enter the current temperature:");
    scanf("%d", &t);

    if (t>=27) {
        printf("The temperature is hot.");
    } else if (t>=24 && t<=26) {
        printf("The temperature is mild warm.");
    } else if (t>=21 && t<=23) {
        printf("The temperature is soothing.");
    } else if (t<=21)  {
        printf("The temperature is cold.");
    } else {
        printf("Your temperature might be out of this world.");
    }

    return 0;
}
