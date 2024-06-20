#include<stdio.h>
#include<stdlib.h>

int main(){
    int g;
    printf("Please enter your marks (0 to 100):");
    scanf("%d", &g);
    g=g/10;
    switch (g) {
    case 10:
        printf("Your letter grade is A Excellent");
        break;
    case 9:
        printf("Your letter grade is A");
        break;
    case 8:
        printf("Your letter grade is B");
        break;
    case 7:
        printf("Your letter grade is C");
        break;
    case 6:
        printf("Your letter grade is D");
        break;
    default:
        printf("Your letter grade is F");
        break;
    }
    return 0;
}
