#include<stdio.h>
#include<stdlib.h>

int main(){
    int g;
    printf("Guess a number from 1 to 9:");
    scanf("%d", &g);

    switch (g) {
    case 5:
        printf("Congratulations! You won!!");
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Too low");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("Too High");
        break;
    }
    return 0;
}
