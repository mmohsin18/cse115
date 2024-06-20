#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2][2];

    printf("Enter %d values in the 2D array:", 2*2*2);
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                printf("arr[%d][%d][%d] = %d \n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
