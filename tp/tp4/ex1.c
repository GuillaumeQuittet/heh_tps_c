#include <stdio.h>
#include <string.h> // Useful for strlen fonction
#include <ctype.h> // Useful for checking the type of a variable

int string_len_ite(char* text_string)
{
    int len = 0;
    while(isprint(text_string[len]))
    {
        printf("%c ", text_string[len]);
        len++;
    }
    return len;
}

int string_len_strlen(char* text_string)
{
    return strlen(text_string) - 1; // strlen return length + 1 so I subtract 1
}

int main()
{
    char sentence[99];
    printf("Enter a text string: ");
    fgets (sentence, 99, stdin); // Save str with space
    printf("%s\n", sentence);
    printf("%d\n", string_len_ite(sentence));
    printf("%d\n", string_len_strlen(sentence));
    return 0;
}
