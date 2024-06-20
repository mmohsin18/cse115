#include<stdio.h>
#include<stdlib.h>

int main() {
    int x;
    printf("Welcome to Up Down University \n");
    printf("Enter your obtained mark:");
    scanf("%d", &x);
    if(x<=60) {
        printf("You are a creative person!!");
    } else if((x>=60) && (x<=69)) {
        printf("You are on the right track!");
    } else if((x>=70) && (x<=79)) {
        printf("Keep up the hard work!");
    } else if((x>=80) && (x<=89)){
        printf("You need to try harder and let your creativity flow!");
    } else{
        printf("You are officially a nerd!!");
    }
    return 0;
}
