#include <stdio.h>

int main()
{
    int nb1, nb2;

    // Ask the real part and the imaginary unit to the user
    printf("Enter the first number value: ");
    scanf("%d", &nb1);
    printf("\nEnter the second number value: ");
    scanf("%d", &nb2);

    // Swap the numbers with the XOR method
    nb1 ^= nb2, nb2 = nb1 ^ nb2, nb1 ^= nb2;
    printf("\n---- After swapping the numbers value ----\n\n");

    // Show the new values
    printf("The first number value is %d\n\n", nb1);
    printf("The second number value is %d\n", nb2);
}
