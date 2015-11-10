#include <stdio.h>
#include <ctype.h>

int number_of_times_char_in_str(char* text_string, char letter)
{
    int times = 0;
    int i     = 0;
    while(isprint(text_string[i]))
    {
        if (text_string[i] == tolower(letter) || text_string[i] == toupper(letter))
            times++;
        i++;
    }
    return times;
}

int main()
{
    char text_string[99];
    printf("Enter a text string: ");
    fgets(text_string, 99, stdin);
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    printf("%d\n", number_of_times_char_in_str(text_string, letter));
    return 0;
}

