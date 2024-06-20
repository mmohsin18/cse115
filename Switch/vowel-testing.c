#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the letter:");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("The letter is a vowel.");
            break;
        default:
            printf("The letter is not a vowel.");
    }
    return 0;
}
