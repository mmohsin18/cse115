#include <stdio.h>


int main() {
    int cal[12][5][7];
    int i,j,k;

    for(i=0; i<12; i++)
    {
        for(j=0; j<5; j++)
        {
            for(k=0; k<7; k++)
            {
                if(k == 5 || k == 6)
                {
                    cal[i][j][k] = 100;
                } else if (k == 0 || k == 2)
                {
                    cal[i][j][k] = 50;
                } else if (i == 2 || i == 6)
                {
                    cal[i][j][k] = 0;
                } else
                {
                    cal[i][j][k] = 0;
                }
            }
        }

    }

    int m;

    printf("Which Month Calender do you want to see: ");
    scanf("%d", &m);

    i= m-1;

    printf("\n\n");
    switch(i)
    {
            case 0: printf("Month %d : January  \n\n", i+1); break;
            case 1: printf("Month %d : February  \n\n", i+1); break;
            case 2: printf("Month %d : March  \n\n", i+1); break;
            case 3: printf("Month %d : April  \n\n", i+1); break;
            case 4: printf("Month %d : May  \n\n", i+1); break;
            case 5: printf("Month %d : June  \n\n", i+1); break;
            case 6: printf("Month %d : July  \n\n", i+1); break;
            case 7: printf("Month %d : August  \n\n", i+1); break;
            case 8: printf("Month %d : September  \n\n", i+1); break;
            case 9: printf("Month %d : October  \n\n", i+1); break;
            case 10: printf("Month %d : November  \n\n", i+1); break;
            case 11: printf("Month %d : December  \n\n", i+1); break;
            default: printf("Invalid");
    }

        printf(" sun    mon\t tue    wed\tthu\tfri\tsat \n");
        for(j=0; j<5; j++)
        {
            for(k=0; k<7; k++)
            {
                if(( i==0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11) && j == 4 && ( k > 2))
                {
                    printf("\t");
                } else if(( i==3 || i == 5 || i == 8 || i == 10) && j == 4 && ( k > 1))
                {
                    printf("\t");
                } else if ( i == 1 && j == 4 )
                {
                    printf("\t");
                } else if (cal[i][j][k] == 50)
                {
                    printf("Class\t");
                } else if (cal[i][j][k] == 100)
                {
                    printf("Off\t");
                } else
                {
                    printf("Ok\t");
                }
            }
            printf("\n");
    }


    return 0;
}

