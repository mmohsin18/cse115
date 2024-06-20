#include<stdio.h>
#include<stdlib.h>

int main() {
    int x,y, secret;
    do {
        printf("Enter a random number:");
        scanf("%d", &x);
        secret=(((x+3)*2)-1);
        printf("Enter The magic number:");
        scanf("%d", &y);
        if(y == secret) {
            printf("You might be a magician!!");
            break;
        }
        else if (y> secret) {
            printf("Too high!");
        } else {
            printf("Too Low!");
        }
        printf("Try again!! \n");


    } while(1);
    return 0;
}
