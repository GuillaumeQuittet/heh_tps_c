#ifndef GAME_H
#define GAME_H

typedef struct Pawn Pawn;

struct Pawn
{
    char color;
};

int isEmpty(Pawn tablePawn[][7], char colonne);
int isWin(Pawn tablePawn[][7]);
int placePawn(Pawn tablePawn[][7], char colonne, int turn);
char ask(Pawn tablePawn[][7], int turn, int end);
void drawGrid(Pawn tablePawn[][7]);
int startGame(Pawn tablePawn[][7], int turn);
int start();

#endif // GAME_H