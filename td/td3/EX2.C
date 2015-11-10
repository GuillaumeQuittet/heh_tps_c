#include <stdio.h>
#include <stdbool.h>

int nbr;

int main()
{
    // Ask a number to the user
    printf("Enter a number : ");
    scanf("%d", &nbr);
    // If the number is even say True else say False (cf Ternary condition)
    printf(nbr%2 == 0 ? "True\n": "False\n");
    return 0;
}
