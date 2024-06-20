#include <stdio.h>
#include <stdlib.h>

struct notes
{
    char notes[200];
    char topic[20];
    int imp;
    float date;
    int done;
} s[20];

int main()
{
    FILE *fp;
    fp = fopen("data.txt", "w");

    printf("\tAdd New Notes\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nNote:");
        fgets(s[i].notes, sizeof(s[i].notes), stdin);
        fprintf(fp, "%s", s[i].notes); // Write note to file
        printf("Importance (out of 5):");
        scanf("%d", &s[i].imp);
        fprintf(fp, "%d\n", s[i].imp); // Write importance to file
        getchar();
    }

    fclose(fp);

    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- Notes from File ---\n");

    for (int i = 0; i < 3; i++)
    {
        fscanf(fp, " %[^\n]%*c", s[i].notes); // Read note from file
        fscanf(fp, "%d", &s[i].imp); // Read importance from file
        printf("Note: %s\n", s[i].notes);
        printf("Importance: %d\n", s[i].imp);
    }

    fclose(fp);
    return 0;
}
