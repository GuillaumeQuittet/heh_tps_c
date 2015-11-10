/*================================
 * Détermination des racines réelles d'une équation
 * du second degré.
 * ================================*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,root_delta,x1,x2;

    //lecture des coefficients
    printf("La valeur du coefficient de a = ");
    scanf("%f",&a);
    printf("La valeur du coefficient de b = ");
    scanf("%f",&b);
    printf("La valeur du coefficient de c = ");
    scanf("%f",&c);

    //Calcul des solutions
    root_delta = sqrt(b*b-4*a*c);
    x1=(-b+root_delta)/(2*a);
    x2=(-b-root_delta)/(2*a);

    //Affichage des résultats
    printf("x1= %f x2=%f\n",x1,x2);
}
