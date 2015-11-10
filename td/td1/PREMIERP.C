/*==================================
 * Premier programme : somme et produit de deux nombres
 * ==================================*/
#include <stdio.h>
int main()
{
    int nombre1, nombre2,resultat;

    //lectures des deux nomnbres
    printf("Entrez le premier nombre : ");
    scanf("%d",&nombre1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d",&nombre2);
    resultat = nombre1 + nombre2;
    printf("La somme est de %d\n",resultat);
    int produit = nombre1 * nombre2;
    printf("Le produit vaut %d\n",produit);
}
