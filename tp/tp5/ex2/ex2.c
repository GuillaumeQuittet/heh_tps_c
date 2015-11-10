#include <stdio.h>
#include "ex2.h"

unsigned int factorielle(int n)
{
    if (n >= 0)
    {
        unsigned int i = n;
        if (n != 0)
        {
            while(i != 1)
            {
                i--;
                n *= i;
            }
        }
        else
            return 1;
        return n;
    }
    else
    {
        printf("La factorielle d'un nombre négatif n'existe pas.\n");
        return 0;
    }
}

unsigned int arrangement(int n, int p)
{
    if ((n - p) != 0)
        return factorielle(n) / factorielle(n - p);
    else
        return factorielle(n);
}

unsigned int combinaison(int n, int p)
{
    if((n - p) != 0)
        return factorielle(n) / (factorielle(n - p) * factorielle(p));
    else
        return factorielle(n) / factorielle(p);
}

int main()
{
    int n = -1;
    int p;
    while(n < 1 || n > 4)
    {
        printf("Choisissez une opération:\n1) Factorielle\n2) Arrangement\n3) Combinaison\n4) Quitter\nChoix: ");
        scanf("%d", &n);
    }
    switch(n)
    {
        case 1:
            n = -1;
            while(n < 0)
            {
                printf("Entrer un nombre entier: ");
                scanf("%d", &n);
            }
            printf("La factorielle de %d vaut %u.\n", n, factorielle(n));
            break;
        case 2:
            n = -1;
            p = -2;
            while(n < 0 || n < p)
            {
                printf("Entrez un nombre entier: ");
                scanf("%d", &n);
                printf("Entrez un second nombre entier: ");
                scanf("%d", &p);
            }
            printf("L'arrangement de %d avec %d vaut %u.\n", n, p, arrangement(n, p));
            break;
        case 3:
            n = -1;
            p = -2;
            while(n < 0 || n < p)
            {
                printf("Entrez un nombre entier: ");
                scanf("%d", &n);
                printf("Entrez un second nombre entier: ");
                scanf("%d", &p);
            }
            printf("La combinaison de %d avec %d vaut %u.\n", n, p, combinaison(n, p));
            break;
        default:
            printf("Tchio Ma bite !\n");
            break;
    }
    return 0;
}
