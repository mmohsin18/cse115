#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOTES 40
#define USERNAME "mmohsin"
#define PASSWORD "664746"

struct notes
{
    char notes[200];
    char topic[20];
    int imp;
    float date;
    int done;
} s[MAX_NOTES];

int num_notes = 0;

int menu();
int login();
int addNotes();
int deleteNote();
int searchNote();
int printNotes(int i);
int viewNotes();
int scanNotes();
int writeNotes();
int editNote();

int main()
{
    int success;
    success = login();
    if (success == 1)
    {
        scanNotes();
        printf("\n\tNote Taking System\n");
        int c;
        do
        {
            c = menu();
        }
        while (c != 0);
        printf("%d", num_notes);
    }
    else
    {
        printf("Invalid Username & Password");
    }

    return 0;
}

int menu()
{
    int c;
    printf("\n1. Add Note\n2. View Notes\n3. Search by Topic\n4. Mark Completed\n5. Edit Note\n0. Exit\n");
    printf("\n\nWhat do you want to do? ");
    scanf("%d", &c);
    getchar();
    switch (c)
    {
    case 1:
        addNotes();
        break;
    case 2:
        viewNotes();
        break;
    case 3:
        searchNote();
        break;
    case 4:
        deleteNote();
        break;
    case 5:
        editNote();
        break;
    case 0:
        printf("Exiting...");
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
    return c;
}

int login()
{
    printf("\tLogin to your account\n");
    char username[20];
    char password[20];
    printf("Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;
    printf("Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    if (strcmp(username, USERNAME) == 0 && strcmp(password, PASSWORD) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int addNotes()
{
    if (num_notes >= MAX_NOTES)
    {
        printf("Hey! Sorry... You have reached the max number of notes that can be added!!\n");
        return num_notes;
    }

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return num_notes;
    }

    system("cls");  // Clear screen (Windows)
    int i = num_notes++;
    printf("\tAdd a New Note\n");
    printf("Note: ");
    fgets(s[i].notes, sizeof(s[i].notes), stdin);
    fprintf(fp, "%s", s[i].notes);
    printf("Topic: ");
    fgets(s[i].topic, sizeof(s[i].topic), stdin);
    fprintf(fp, "%s", s[i].topic);
    printf("Importance (out of 5): ");
    scanf("%d", &s[i].imp);
    fprintf(fp, "%d\n", s[i].imp);
    printf("Due Date (dd.mm): ");
    scanf("%f", &s[i].date);
    fprintf(fp, "%f\n", s[i].date);

    fclose(fp);
    return num_notes;
}

int searchNote()
{
    system("cls");  // Clear screen (Windows)
    printf("Search notes by topic: ");
    char search[20];
    getchar(); // Consume newline character left in buffer
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = 0; // Remove newline character
    int found = 0;
    for (int i = 0; i < num_notes; i++)
    {
        if (strstr(s[i].topic, search) != NULL)
        {
            printNotes(i);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No notes found\n");
    }
    return found;
}

int viewNotes()
{
    system("cls");  // Clear screen (Windows)
    for (int i = 0; i < num_notes; i++)
    {
        printNotes(i);
    }
    return 1;
}

int printNotes(int i)
{
    printf("\nNote %d", i + 1);
    printf("\nNote: %s", s[i].notes);
    printf("Topic: %s", s[i].topic);
    printf("Importance: %d", s[i].imp);
    printf("\nDate: %.2f\n", s[i].date);
    return 1;
}

int deleteNote()
{
    viewNotes();
    if (num_notes != 0)
    {
        printf("Enter the index of the note you want to mark completed: ");
        int x;
        scanf("%d", &x);
        if (x < 1 || x > num_notes)
        {
            printf("Invalid index.\n");
            return num_notes;
        }
        for (int i = x - 1; i < num_notes - 1; i++)
        {
            s[i] = s[i + 1];
        }
        num_notes--;
        printf("\nNote Marked Complete\n");
        writeNotes();
    }
    return num_notes;
}

int scanNotes()
{
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        return num_notes; // No file to read, return
    }

    num_notes = 0;
    while (fgets(s[num_notes].notes, sizeof(s[num_notes].notes), fp))
    {
        fgets(s[num_notes].topic, sizeof(s[num_notes].topic), fp);
        fscanf(fp, "%d", &s[num_notes].imp);
        fscanf(fp, "%f", &s[num_notes].date);
        fscanf(fp, "\n"); // Read newline character
        num_notes++;
        if (num_notes >= MAX_NOTES) break; // Stop reading if max notes are reached
    }

    fclose(fp);
    return num_notes;
}

int writeNotes()
{
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return num_notes;
    }

    for (int i = 0; i < num_notes; i++)
    {
        fprintf(fp, "%s", s[i].notes);
        fprintf(fp, "%s", s[i].topic);
        fprintf(fp, "%d\n", s[i].imp);
        fprintf(fp, "%f\n", s[i].date);
    }

    fclose(fp);
    return num_notes;
}

int editNote()
{
    viewNotes();
    if (num_notes != 0)
    {
        printf("Enter the index of the note you want to edit: ");
        int x;
        scanf("%d", &x);
        if (x < 1 || x > num_notes)
        {
            printf("Invalid index.\n");
            return num_notes;
        }

        x--;
        system("cls");
        printf("\n1. Note\n2.Topic\n3.Importance\n4.Due Date");
        printf("\nWhat do you want to edit: ");
        int choice;
        scanf("%d", &choice);
        getchar();
        switch(choice)
        {
        case 1:
        {
            printf("Enter new Note: ");
            fgets(s[x].notes, sizeof(s[x].notes), stdin);
            break;
        }
        case 2:
        {
            printf("Enter new Topic: ");
            fgets(s[x].topic, sizeof(s[x].topic), stdin);
            break;
        }
        case 3:
        {
            printf("Enter new Importance (out of 5): ");
            scanf("%d", &s[x].imp);
            break;
        }
        case 4:
        {
            printf("Enter new Due Date (dd.mm): ");
            scanf("%f", &s[x].date);
            break;
        }
        default:
        {
            printf("Invalid Input");
            break;
        }
        }
        writeNotes();

        printf("\nNote Edited Successfully\n");
    }
    return num_notes;
}
