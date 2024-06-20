#include<stdio.h>
void triangle(); //Prototype of function (If golla function is defined after main function)
void square();
void smoke();

int main(){
    printf("Journey To the Moon\n");
    triangle();
    square();
    square();
    square();
    smoke();
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

void smoke() {
    printf("*  *  * \n");
    printf(" *  *  *\n");
    printf("*  *  * \n");
    printf(" *  *  *\n");
}
