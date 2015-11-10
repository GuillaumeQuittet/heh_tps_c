#include <stdio.h>
#include <stdlib.h>

// Start the game and the user must find the number between 1 and n
int start_the_game(int n)
{
    int tries_number = 0;
    int answer       = 0;
    while(answer != n)
    {
        printf("Choose a number between 1 and 1000: ");
        scanf("%d", &answer);
        if (answer > n)
            printf("Fail! Try with a lower number.\n");
        else if(answer < n)
            printf("Fail! Try with a bigger number.\n");
        tries_number++;
    }
    return tries_number;
}

int main()
{
    int random_number = rand() % 1000 + 1;
    printf("Good game! You find the number in %d tests.\n", start_the_game(random_number));
    return 0;
}
