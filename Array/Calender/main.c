#include <stdio.h>

int main() {
    int cal[5][7];
    int i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<7; j++)
        {
            if(j == 5 || j == 6)
            {
                cal[i][j] = 100;
            } else if (j == 0 || j == 2)
            {
                cal[i][j] = 50;
            } else
            {
                cal[i][j] = 0;
            }
        }
    }


    for(i=0; i<5; i++)
    {
        for(j=0; j<7; j++)
        {
            if(cal[i][j] == 100)
            {
                printf("Off ");
            } else if (cal[i][j] == 50)
            {
                printf("Class ");
            } else
            {
                printf("Ok ");
            }
        }
        printf("\n");
    }

    return 0;
}
