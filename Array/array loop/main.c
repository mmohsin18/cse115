#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 7;

    printf("sun mon tue wed thu  fri  sat\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 5 || j == 6) {
                printf(" %d ", 100);
            } else {
                printf(" %d  ", 0);
            }
        }
        printf("\n");
    }

    return 0;
}
