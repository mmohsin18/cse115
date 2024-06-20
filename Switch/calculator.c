#include<stdio.h>
#include<stdlib.h>

int main() {
    int x,y,s,o;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    printf(" 1. Sum\n 2. Difference\n 3. Multiplication\n 4. Division\n 5. Modulas\n");
    printf("Chose one operation:");
    scanf("%d", &s);

    switch (s) {
    case 1:
        o=x+y;
        printf("%d + %d = %d", x,y,o);
        break;
    case 2:
        o=x-y;
        printf("%d - %d = %d", x,y,o);
        break;
    case 3:
        o=x*y;
        printf("%d x %d = %d", x,y,o);
        break;
    case 4:
        o=x/y;
        printf("%d / %d = %d", x,y,o);
        break;
    case 5:
        o=x%y;
        printf("%d %% %d = %d", x,y,o);
        break;
    default:
        printf("Invalid Input");
    }

    return 0;
}
