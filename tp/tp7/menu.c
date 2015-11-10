#include <stdio.h>
#include <string.h>

/*
J'avais la flemme d'écrire plusieurs lettres
d'affilées donc j'ai créé une fonction qui le
fait à ma place.
*/
void concatenation(char letter[], int n, int returnAtTheEndOfLine)
{
    int i = 0;
    while(i < n)
    {
        printf("%s", letter);
        i++;
    }
    if (returnAtTheEndOfLine == 1)
        printf("\n");
}

/*
 Fonction qui affiche le menu et demande
 à l'utilisateur de faire un choix.
 Va-t-il y parvenir ? Il peut être tellement
 bête des fois.
 */
char menu()
{
    char choice;
    // Définis les variables du menu
    char authorTitle[] = "Programme réalisé par :";
    char author[] = "Guillaume QUITTET";
    char groupTitle[] = "Groupe :";
    char group[] = "5";
    char menuTitle[] = "Menu du jeu";
    char releaseDateTitle[] = "Date de version :";
    char releaseDate[] = "13/10/2015";
    char sectionTitle[] = "Section :";
    char section[] = "Informatique";
    char title[] = "TP7 : Jeu du Puissance 4";
    char yearTitle[] = "Année académique :";
    char year[] = "BA1P";
    concatenation("\033[0;92m-\033[0m", strlen(authorTitle)+strlen(author)+1, 1);
    printf("\033[0;91m%s\033[0;93m%20s\n\033[0;91m%s \033[0;93m%s\033[0;91m%19s \033[0;93m%s\n\033[0;91m%s \033[0;93m%s\n\033[0;91m%s \033[0;93m%s\n", authorTitle, author, sectionTitle, section, groupTitle, group, yearTitle, year, releaseDateTitle, releaseDate);
    concatenation("\033[0;92m-\033[0m", strlen(authorTitle)+strlen(author)+1, 1);
    printf("\033[0;96m%s\033[0m\n", title);
    concatenation("\033[0;92m=\033[0m", ((strlen(author)+strlen(menuTitle))/2)+1, 0);
    printf(" \033[0;91m%s\033[0m ", menuTitle);
    concatenation("\033[0;92m=\033[0m", ((strlen(author)+strlen(menuTitle))/2)+1, 1);
    printf("\033[0;96m(1) : Lancer une partie\n(2) : Afficher les règles du jeu\n(3) : Quittet\033[0m\n");
    concatenation("\033[0;92m=\033[0m", strlen(authorTitle)+strlen(author), 1);
    printf("Faites votre choix? : ");
    // J'ai mis un string car avec un char j'ai un bug d'affichage
    scanf("%c", &choice);
    return choice;
}

