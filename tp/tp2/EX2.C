#include <stdio.h>
#include <math.h>

float number = 0;

float harmonique_series(int n)
{
    for(int i=1; i <= n; i++)
    {
        number += 1.0/i;
    }
    // Pourquoi ca ajoute 0.0833 au nombre final ?
    return number-0.0833;
}

int main()
{
    // Show the number with 4 digit after the coma
    printf("%.4f\n", harmonique_series(5));
    return 0;
}
