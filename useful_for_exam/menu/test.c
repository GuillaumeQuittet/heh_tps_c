/*
 * =============================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  Fonction menu utile pour l'examen
 *
 *        Version:  1.0
 *        Created:  12/08/2015 03:02:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guillaume QUITTET
 *   Organization:  TEAM Glider
 *
 * =============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Cette fonction est la condition
int condition(char choice[]) {
    // Le 'i' est l'indice grâce auquel je vais parcourir mon tableau
    int i = 0;
    // La boucle permet de parcourir le tableau. Je vais jusqu'au zéro terminal
    // c'est-à-dire la fin de mon tableau dans le pire des cas.
    while(choice[i] != '\0') {
        // Si l'indice est strictement supérieur à 0 (exemple : l'utilisateur
        // entre 1345 -> la partie où l'indice est strictement plus grande que 0
        // sera donc 345) et qu'elle a été modifiée (donc qu'elle ne vaut plus
        // '\a', ca veut dire que l'utilisateur a rentré de la merde. La
        // condition ne peut donc pas être respectée. Ma fonction retourne donc
        // 0.
        if(i > 0 && choice[i] != '\a' ) {
            return 0;
        // Si l'indice vaut 0 et que la partie dont l'indice vaut 0 est
        // strictement inférieure à '1' ou strictement supérieure à '3' cela
        // veut dire que la condition n'a pas été respectée. La fonction
        // retourne donc 0.
        } else if(i == 0 && (choice[i] < '1' || choice[i] > '3')) {
            return 0;
        }
        // Pour un certain indice, les conditions sont respectées donc,
        // j'incrémente mon indice et je vérifie pour l'indice suivant.
        // Dans le pire des cas, je vais vérifier tout mon tableau
        i++;
    }
    // Les conditions sont bien respectées, je peux donc retourner la valeur 1.
    return 1;
}

// Le menu
void menu() {
    // Je crée 2 tableaux : un temporaire et un normal
    char answer[99] = {};
    char answerTemp[99] = {};
    // Je remplis le tableau temporaire de caractères qui ne seront pas rentrés
    // par l'utilisateur
    for(int i = 0; i < 99; i++) {
        answerTemp[i] = '\a';
    }
    // Le menu se lance et est répété tant que la condition n'est pas respectée
    do {
        // Les lignes 66 et 67 servent à afficher le menu
        printf("Menu :\n");
        printf("1) Choix n.1\n2) Choix n.2\n3) Choix n.3\nChoix : ");
        // Je stocke la réponse dans un tableau temporaire
        scanf("%s", answerTemp);
        // Je copie le tableau temporaire dans le définitif grâce à la fonction
        // strcpy(). Cela permet que le tableau final se termine par un zéro
        // terminal. C'est à dire : '\0'
        strcpy(answer, answerTemp);
        // J'appelle la condition et si elle n'est pas respectée, le menu se
        // relance. !condition signifie : "si la condition n'est pas respectée."
    } while(!condition(answer));
}

// C'est ici que tout démarre
int main() {
    // Je lance le menu
    menu();
    // Une fois la condition repectée, le programme se termine.
    return 0;
}

