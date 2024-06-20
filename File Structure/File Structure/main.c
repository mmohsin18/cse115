#include <stdio.h>
#include <stdlib.h>

int menu();
void updateFile();
void readFile();

int main() {
    int choice;
    FILE *file;
    menu();

    return 0;
}

int menu() {
    printf("1. Add New Info\n2. Read Existing File\n");
    printf("What do you want to do? ");
    int ch;
    scanf("%d", &ch);
    while ((getchar()) != '\n'); // Clear input buffer

    switch(ch) {
        case 1:
            updateFile();
            break;
        case 2:
            readFile();
            break;
        default:
            printf("\nInvalid Choice\n");
            break;
    }
    menu();
    return ch;
}

void updateFile() {
    FILE *file;
    char name[20];
    int age;
        char ch2 = "mmohsin";

    file = fopen("ch2.txt", "a");
    if (file == NULL) {
        printf("File Does not exist");
        return;
    }

    printf("Add new info:\n");
    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s, Age: %d\n", name, age);

    fclose(file);
}

void readFile() {
    FILE *file;
    char ch;
    char ch2 = "mmohsin";

    file = fopen("ch2.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return;
    }

    printf("\n\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
}
