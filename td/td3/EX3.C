#include <stdio.h>

int nbr = 0;

int main()
{
    // Ask the user a number while it isn't between 1000 and 9999
    while(nbr < 1000 || nbr > 9999)
    {
        printf("Enter a number >= 1000 : ");
        scanf("%d", &nbr);
    }
    // Divide the number by 1000, then by 100, 10 and 1
    for(int i = 1000; i >= 1; i /= 10)
    {
        printf("%d ", nbr/i); // Divide the number by i ex: 1234 / 1000 = 1
        nbr -= (nbr/i) * i; // Example (nbr = 1234) : nbr = (1234/1000) * 1000 = 1 * 1000 = 1000 ||||  1234 - 1000 = 234
    }
    // Useful for a bg program ;)
    printf("\n");
    return 0;
}
