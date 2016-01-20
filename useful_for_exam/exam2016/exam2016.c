/*
 * =============================================================================
 *
 *       Filename:  exam2016.c
 *
 *    Description:  Examen 2016
 *
 *        Version:  1.0
 *        Created:  01/20/2016 06:19:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guillaume QUITTET
 *   Organization:  Team GLIDER
 *
 * =============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "exam2016.h"

int conditionTable(char table[]) {
    int i = 0;
    while (table[i] != '\0') {
        if (i > 0 && table[i] != '\a')
            return 0;
        else if(i == 0 && table[0] != '\a') {
            if(table[i] < '3' || table[i] > '9')
                return 0;
        }
        i++;
    }
    return 1;
}

int strToInt(char a) {
    switch(a) {
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        default:
            printf("[ERREUR] J'ai fait une erreur dans mon code :(\n");
    }
}

int genRandom(int x_min, int x_max) {
    return (rand()%(x_max - x_min)) + x_min;
}

void remplirTableau(int table[][9], int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            table[i][j] = genRandom(10, 20);
        }
    }
}

void showTable(int table[][9], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

void invTableau(int table[9][9], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size/2; j++) {
            if (table[i][j] != table[i][size-(j+1)]) {
                table[i][j] ^= table[i][size-(j+1)];
                table[i][size-(j+1)] ^= table[i][j];
                table[i][j] ^= table[i][size-(j+1)];
            }
        }
    }
}

int countOccurence(int table[][9], int size, int value) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(table[i][j] == value)
                count++;
        }
    }
    return count;
}

int askNumber() {
    int number = 0;
    while(number > 20 || number < 10) {
        printf("Please enter a value between 10 and 20: ");
        scanf("%d", &number);
    }
    return number;
}

int askTableSize() {
    int tableLength = 99;
    char sizeTemp[tableLength], size[tableLength];
    for (int i = 0; i < tableLength; i++) {
        sizeTemp[i] = '\a';
        size[i] = '\a';
    }
    do {
        printf("Please enter a table size: ");
        scanf("%s", sizeTemp);
        strcpy(size, sizeTemp);
    } while(!conditionTable(size));
    return strToInt(size[0]);
}

int main(char *args) {
    printf("QUITTET Guillaume Info Groupe 5\n");
    // Initialisation du tableau
    int tableInt[9][9];
    int nbr_ligcol;
    nbr_ligcol = askTableSize();
    remplirTableau(tableInt, nbr_ligcol);
    printf("\n");
    printf("Le tableau avant l'inversion:\n");
    showTable(tableInt, nbr_ligcol);
    printf("\n");
    printf("Le tableau après l'inversion:\n");
    invTableau(tableInt, nbr_ligcol);
    showTable(tableInt, nbr_ligcol);
    printf("\n");
    int numberAsked = askNumber();
    printf("The number %d is %d time(s) in the table.\n", numberAsked, \
            countOccurence(tableInt, nbr_ligcol, numberAsked));
    return EXIT_SUCCESS;
}
