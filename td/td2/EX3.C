#include <stdio.h>

int main()
{
    int nb1, nb2, result;

    // Ask number to the user
    printf("Enter 2 numbers : ");
    scanf("%d %d", &nb1, &nb2);

    // Show the operations and the result
    result = nb1 + nb2;
    printf("%d + %d = %d\n", nb1, nb2, result);
    result = nb1 - nb2;
    printf("%d - %d = %d\n", nb1, nb2, result);
    result = nb1 * nb2;
    printf("%d * %d = %d\n", nb1, nb2, result);
}
