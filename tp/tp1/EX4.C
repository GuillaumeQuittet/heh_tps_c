#include <stdio.h>

char letter;

int main()
{
    // Letter in ASCII are between 65 and 127
    while(letter < 65 || letter > 127)
    {
        printf("Enter a letter: ");
        scanf("%s", &letter);
        if (letter < 65 || letter > 127)
            printf("[ERROR] Please enter a letter\n");
    }
    // Letter between [65, 97[ are in capital letter
    if (letter >= 65 && letter < 97)
        printf("Letter is a capital letter\n\a\a");
    // Letter between [97, 127] are in lower case
    else
        printf("Letter is a lower case letter\n\a");
    return 0;
}
