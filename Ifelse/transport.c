#include<stdio.h>
#include<stdlib.h>

int main(){
    int h,m;
    printf("Enter the hour value:");
    scanf("%d", &h);

    printf("Enter the minute value:");
    scanf("%d", &m);

    if((h<=7) && (m<60)) {
        printf("You can use rickshaw!");
    } else if ((h==7) && (h==8) && (m<60)){
        printf("You should use bus");
    } else if (((h==8) && (m<=60))){
        printf("You must use CNG");
        fflush(stdin);
    } else if ((h=9)&&(m<10)) {
            printf("You must use CNG");
        } else {
            printf("You better stay at home");
        }
    return 0;
}
