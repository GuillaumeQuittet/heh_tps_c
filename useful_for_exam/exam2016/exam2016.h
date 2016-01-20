/*
 * =============================================================================
 *
 *       Filename:  exam2016.h
 *
 *    Description:  Examen 2016 header file
 *
 *        Version:  1.0
 *        Created:  01/20/2016 07:15:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guillaume QUITTET
 *   Organization:  Team GLIDER
 *
 * =============================================================================
 */

#ifndef EXAM2016_H
#define EXAM2016_H

int askNumber();
int askTableSize();
int conditionTable(char table[]);
int countOccurence(int table[][9], int size, int value);
int genRandom(int x_min, int x_max);
int strToInt(char a);
void invTableau(int table[][9], int size);
void remplirTableau(int table[][9], int size);
void showTable(int table[][9], int size);

#endif // EXAM2016_H

