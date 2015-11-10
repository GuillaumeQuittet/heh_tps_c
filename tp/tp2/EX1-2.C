#include <stdio.h>

char letter=0;

int main()
{
    do
    {
        printf("Choose a letter between a, b or c: ");
        scanf("%c", &letter);
    }while(letter < 97 || letter > 99);
    return 0;
}
