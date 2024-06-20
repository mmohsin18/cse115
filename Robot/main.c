#include <stdio.h>
#include <stdlib.h>

int printing(int p, int q);
void choice();
int check(int w, int v);

int main() {
    int cal[4][4] = {0};
    int p = 0, q = 0;
    printing(p, q);

    int m;

    while (1) {
        choice();
        scanf("%d", &m);

        switch (m) {
            case 1:
                if (p > 0) {
                    p--;
                } else {
                    printf("\nYou can't go there!! \n\n");
                }
                break;
            case 2:
                if (q < 3) {
                    q++;
                } else {
                    printf("You can't go there!! \n\n");
                }
                break;
            case 3:
                if (p < 3) {
                    p++;
                } else {
                    printf("You can't go there!! \n\n");
                }
                break;
            case 4:
                if (q > 0) {
                    q--;
                } else {
                    printf("You can't go there!! \n\n");
                }
                break;
            default:
                printf("Invalid choice!\n");
        }

        printing(p, q);

        int result = check(p, q);
        if (result == 1) {
            printf("You found the treasure!! \n");
            break;
        } else if (result == 4) {
            printf("You fell into a mine !! \n");
            break;
        }
    }

    return 0;
}

// Function to print the game structure
int printing(int p, int q) {
    printf("------------------------- \n");
    for (int i = 0; i < 4; i++) {
        printf("|");
        for (int j = 0; j < 4; j++) {
            if (i == p && j == q) {
                printf("  1  |");
            } else {
                printf("  0  |");
            }
        }
        printf("\n");
        printf("------------------------- \n");
    }
    printf("\n\n");
}

void choice() {
    printf(" 1. Up\n 2. Right\n 3. Down\n 4. Left\n");
    printf("Where do you want to go? ");
}

int check(int w, int v) {
    if (w == 3 && v == 2) {
        return 1; // Treasure is here
    } else if (w == 2 && v == 1) {
        return 4; // Mine setup
    } else if (w == 1 && v == 0) {
        return 4; // Mine setup
    } else if (w == 1 && v == 1) {
        return 4; // Mine setup
    } else if (w == 0 && v == 3) {
        return 4; // Mine setup
    }
    return 0; // when nothing happens
}
