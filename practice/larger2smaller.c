#include<stdio.h>


int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);

    printf("The ascending order of the provided number is : ");
    if (a<b && a<c) {
        printf("%d, ",a);
        if (b<c){
            printf("%d, %d",b,c);
        } else{
            printf("%d,%d",c,b);
        }
    } else if (b<a && b<c) {
        printf("%d, ", b);
        if (a<c) {
            printf("%d, %d",a,c);
        } else {
            printf("%d,%d",c,a);
        }
    } else if (c<a && c<b) {
        printf("%d, ", c);
        if(a<b) {
            printf("%d, %d", a,b);
        } else {
            printf("%d, %d",b,a);
        }
    } else {
        printf("Invalid Input");
    }

    return 0;
}
