#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "ex3.h"

int alreadyEncoded = 0;
int score          = 0;
char answer[99];
FILE *fichier;

void loopMenu(word table[])
{
        int choice = 0;
    while (choice < 49 || choice > 52)
    {
        choice = startMenu();
    }
    switch(choice)
    {
        case 49:
            fichier = fopen("word_database.txt", "a");
            if(fichier == NULL)
            {
                printf("[ERROR] Can't opening the file.\n");
                break;
            }
            encode(table);
            break;
        case 50:
            frenchToEnglish(table);
            break;
        case 51:
            break;
        case 52:
            break;
        default:
            printf("I knew that you're a stupid user but at this point it's very incredible !\n");
            break;
    }
    fclose(fichier);
}

int startMenu()
{
    char choice[2]; // Avec 1 j'ai un bug (core dumped) donc je mets 2 xD
    printf("The translation game:\n");
    printf("1: Encode the series of word\n");
    printf("2: Play French -> English:\n");
    printf("3: Play English -> French\n");
    printf("4: Exit the game\n");
    printf("Your choice: ");
    scanf("%s", choice); // Je mets un string au lieu d'un char car sinon quand j'entre une lettre la fonction s'appelle 2 fois dans la boucle while du main()
    return (int)choice[0];
}

char encode(word table[])
{
    alreadyEncoded = 1;
    for(int i = 0; i < 10; i++)
    {
        printf("Enter the %d English word: ", i+1);
        scanf("%s", table[i].english);
        printf("Enter its translation in French: ");
        scanf("%s", table[i].french);
        fprintf(fichier, "%s\n", table[i].english);
        fprintf(fichier, "%s\n", table[i].french);
    }
    fclose(fichier);
    loopMenu(table);
}

void readFile(FILE fichier)
{
    for(int i = 0; i < 200; i += 2)
    {
        //pass
    }
}

void toLower(word table[])
{
    for(int i = 0; i < 10; i++)
    {
        if(strlen(table[i].french) >= strlen(table[i].english))
        {
            for(int j = 0; j < strlen(table[i].french); j++)
            {
                table[i].english[j] = tolower(table[i].english[j]);
                table[i].french[j]  = tolower(table[i].french[j]);
            }
        }
        else
        {
            for(int j = 0; j < strlen(table[i].english); j++)
            {
                table[i].english[j] = tolower(table[i].english[j]);
                table[i].french[j]  = tolower(table[i].french[j]);
            }
        }
    }
}

int randomNumber(int n)
{
    srand(time (NULL));
    return rand() % n;
}

int frenchToEnglish(word table[])
{
    score = 0;
    for(int i = 0; i < 10; i++)
    {
        int id    = randomNumber(10);
        int clock = 0;
        while(clock < 5 && ((strcmp(answer, table[id].english)) != 0))
        {
            printf("The word to translate in English is %s: ", table[id].french);
            scanf("%s", answer);
            int answer_size = sizeof(answer)/sizeof(answer[0]);
            for(int j = 0; j < answer_size; j++)
            {
                answer[j] = tolower(answer[j]);
            }
            clock++;
        }
        if(clock < 5)
            score++;
    }
    printf("%d\n", score);
    return score;
}

int main()
{
    word table[10];
    loopMenu(table);
    return 0;
}

