#include<stdio.h>
void golla(); //Prototype of function (If golla function is defined after main function)
void cone();

int main(){
    printf("Ice cream\n");
    golla();
    golla();
    golla();
    cone();
}

void golla () {
    printf("  *  \n");
    printf("*   *\n");
    printf("  *  \n");
}

void cone() {
    printf("***** \n");
    printf(" *** \n");
    printf("  * \n");
}
