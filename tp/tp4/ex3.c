#include <stdio.h>
#include <ctype.h>

char* replace_char_in_str(char* text_string, char letter)
{
    int times = 0;
    int i     = 0;
    while(isprint(text_string[i]))
    {
        if (text_string[i] == letter)
            text_string[i] = toupper(letter);
        i++;
    }
    return text_string;
}

int main()
{
    char text_string[99];
    printf("Enter a text string: ");
    fgets(text_string, 99, stdin);
    char letter;
    // J'ai fait ainsi car je suis limité à 2 scanf sinon le programme plante
    printf("Enter a letter to replace: ");
    scanf("%c", &letter);
    printf("%s\n", replace_char_in_str(text_string, letter));
    return 0;
}

