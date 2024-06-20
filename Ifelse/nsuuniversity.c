#include<stdio.h>
#include<stdlib.h>

int main() {
    int x;
    char choice;

    printf("\tWelcome to North South University \n");

    do {
        printf("\n\nEnter your obtained mark: ");
        scanf("%d", &x);

        printf("Your Obtained Grade is ");
        if (x >= 93) {
            printf("A Excellent; CGPA = 4.0");
        } else if (x >= 90 && x <= 92) {
            printf("A-; CGPA = 3.7");
        } else if (x >= 87 && x <= 89) {
            printf("B+; CGPA = 3.3");
        } else if (x >= 83 && x <= 86) {
            printf("B Good; CGPA = 3.0");
        } else if (x >= 80 && x <= 82) {
            printf("B-; CGPA = 2.7");
        } else if (x >= 77 && x <= 79) {
            printf("C+; CGPA = 2.3");
        } else if (x >= 73 && x <= 76) {
            printf("C Average; CGPA = 2.0");
        } else if (x >= 70 && x <= 72) {
            printf("C-; CGPA = 1.7");
        } else if (x >= 67 && x <= 69) {
            printf("D+; CGPA = 1.3");
        } else if (x >= 60 && x <= 66) {
            printf("D Poor; CGPA = 1.0");
        } else if (x < 60) {
            printf("F; CGPA = 0.0");
        } else {
            break;
        }

        printf("\nPress 'c' to continue or type 'x' to quit: ");
        scanf(" %c", &choice);

    } while (choice != 'x');

    return 0;
}
