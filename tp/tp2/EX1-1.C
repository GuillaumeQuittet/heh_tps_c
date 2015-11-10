#include <stdio.h>

char number;

int main()
{
    do
    {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &number);
    }while(number < 1 || number > 10);
    return 0;
}
