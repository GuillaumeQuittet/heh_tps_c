#include <ctype.h>
#include <stdio.h>

#include "game.h"
#include "menu.c"

/*
Vérifie si une case du jeu est vide.
Si oui return 1 si pas 0
 */
int isEmpty(Pawn tablePawn[][7], char colonne)
{
    int ligne = 5; // Car on a 6 lignes : 0, 1, 2, 3, 4, 5
    // '0' = 48 => '0' - 48 = 0
    while(isprint(tablePawn[ligne][colonne-48].color))
    {
        ligne--;
    }
    return ligne;
}

int isWin(Pawn tablePawn[][7])
{
    int i = 0, j = 0;
    int temp = 0;
    while(i < 6)
    {
        j = 0;
        while(j < 7)
        {
            // Horizontal
            temp = tablePawn[i][j].color + tablePawn[i][j+1].color + tablePawn[i][j+2].color + tablePawn[i][j+3].color;
            if(temp == (74*4) || temp == (82*4))
                return 1;
            // Vertical
            temp = tablePawn[i][j].color + tablePawn[i+1][j].color + tablePawn[i+2][j].color + tablePawn[i+3][j].color;
            if(temp == (74*4) || temp == (82*4))
                return 1;
            // Oblique \
            temp = tablePawn[i][j].color + tablePawn[i+1][j+1].color + tablePawn[i+2][j+2].color + tablePawn[i+3][j+3].color;
            if(temp == (74*4) || temp == (82*4))
                return 1;
            // Oblique /
            temp = tablePawn[i][j].color + tablePawn[i-1][j+1].color + tablePawn[i-2][j+2].color + tablePawn[i-3][j+3].color;
            if(temp == (74*4) || temp == (82*4))
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

/*
Add a pawn in the man table
 */
int placePawn(Pawn tablePawn[][7], char colonne, int turn)
{
    char temp;
    temp = (turn%2 == 0) ? 'J' : 'R';
    // '0' = 48 => '0' - 48 = 0
    tablePawn[isEmpty(tablePawn, colonne)][colonne-48].color = temp;
    int end = isWin(tablePawn);
    if (end != 0)
    {
        if(turn%2 == 0)
        {
            printf("Le joueur J a gagné.\n");
            return end;
        }
        else
        {
            printf("Le joueur R a gagné.\n");
            return end;
        }
    }
    return 0;
}

char ask(Pawn tablePawn[][7], int turn, int end)
{
    do
    {
        char colonne;
        do
        {
            if(turn%2 == 0)
                printf("\033[0;93mC'est aux jaunes de jouer : \033[0m");
            else
                printf("\033[0;91mC'est aux rouges de jouer : \033[0m");
            scanf("%s", &colonne);
        } while(colonne < 48 || colonne > 54 || isEmpty(tablePawn, colonne) == -1);
        end = placePawn(tablePawn, colonne, turn);
        turn++;
        drawGrid(tablePawn);
    } while(end == 0);
}

/*
Dessine la grille au démarrage du programme
 */
void drawGrid(Pawn tablePawn[][7])
{
    printf("\033[2J\033[1;1H");
    int i = 0, j = 0;
    while(i < 6)
    {
        j = 0;
        concatenation("\033[0;94m-\033[0m", 29, 1);
        while(j < 7)
        {
            if(isprint(tablePawn[i][j].color))
                if (tablePawn[i][j].color == 'R')
                    printf("\033[0;94m| \033[0m\033[0;91m%c\033[0m ", tablePawn[i][j].color);
                else
                    printf("\033[0;94m| \033[0m\033[0;93m%c\033[0m ", tablePawn[i][j].color);
            else
                printf("\033[0;94m|   \033[0m");
            j++;
        }
        printf("\033[0;94m|\033[0m");
        printf("\n");
        i++;
    }
    concatenation("\033[0;94m-\033[0m", 29, 1);
    printf("\033[0;94m%3d %3d %3d %3d %3d %3d %3d\033[0m\n\n", 0, 1, 2, 3, 4, 5, 6);
}

/*
Lance le menu et lance le jeu.
Heureusement pas très loin donc tu ne devras
pas aller les rechercher.
 */
int start()
{
    int turn = 0, i = 0, j = 0;
    Pawn tablePawn[6][7];
    while(i < 6)
    {
        j = 0;
        while(j < 7)
        {
            tablePawn[i][j].color = '\0';
            j++;
        }
        i++;
    }
    // Fonctionne mieux qu'un clear
    printf("\033[2J\033[1;1H");
    char menuChoice = 0;
    do
    {
        menuChoice = menu();
        printf("\033[2J\033[1;1H");
    }while(menuChoice < 49 || menuChoice > 51);
    switch(menuChoice)
    {
        case 49:
            drawGrid(tablePawn);
            ask(tablePawn, turn, 0);
            break;
        case 50:
            break;
        case 51:
            break;
        default:
            // Ce cas n'arrive jamais car il est déjà géré
            break;
    }
    return 0;
}