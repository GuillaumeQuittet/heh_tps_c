/*
 * =============================================================================
 *
 *       Filename:  conv.h
 *
 *    Description:  Header file of conv.c
 *
 *        Version:  1.0
 *        Created:  01/19/2016 05:12:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guillaume Quittet
 *   Organization:  Team GLIDER
 *
 * =============================================================================
 */

#ifndef CONV_H
#define CONV_H

char intToStr(int a);
char* decToBin(int value);
char* decToOct(int value);
char* decToHex(int value);
void askIp(int ip[]);

#endif // CONV_H
