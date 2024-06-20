#include<stdio.h>
void triangle(); //Prototype of function (If golla function is defined after main function)
void square();

int main(){
    printf("Ice cream\n");
    triangle();
    square();
    square();
}

void triangle () {
    printf("   *  \n");
    printf("  *** \n");
    printf(" ***** \n");
    printf("******* \n");
}

void square() {
    printf(" ***** \n");
    printf(" *   * \n");
    printf(" ***** \n");
}
