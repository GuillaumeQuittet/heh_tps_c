/*
 * =============================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  Conversion Dec, Bin, Oct, Hex
 *
 *        Version:  1.0
 *        Created:  01/19/2016 03:45:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guillaume QUITTET
 *   Organization:  Team GLIDER
 *
 * =============================================================================
 */
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "conv.h"

char intToStr(int a) {
    switch(a) {
        case 0:
            return '0';
            break;
        case 1:
            return '1';
            break;
        case 2:
            return '2';
            break;
        case 3:
            return '3';
            break;
        case 4:
            return '4';
            break;
        case 5:
            return '5';
            break;
        case 6:
            return '6';
            break;
        case 7:
            return '7';
            break;
        case 8:
            return '8';
            break;
        case 9:
            return '9';
            break;
        case 10:
            return 'A';
            break;
        case 11:
            return 'B';
            break;
        case 12:
            return 'C';
            break;
        case 13:
            return 'D';
            break;
        case 14:
            return 'E';
            break;
        case 15:
            return 'F';
            break;
        default:
            printf("Le cas est déjà géré\n");
    }
}

int strToInt(char a) {
    return (a == '0')?0:1;
}

char* decToBin(int value) {
    int i = 1;
    char binResult[8];
    char *binToReturn = malloc(sizeof(char)*8);
    while(value >= 1) {
        binResult[8-i] = intToStr(value%2);
        value /= 2;
        i++;
    }
    // On code sur 8 bits
    while(i <= 8) {
        binResult[8-i] = '0';
        i++;
    }
    strcpy(binToReturn, binResult);
    return binToReturn;
}

char* decToOct(int value) {
    int i = 2, j = 0, k = 0;
    char binValue[8];
    strcpy(binValue, decToBin(value));
    char *valueToReturn = malloc(sizeof(char)*3);
    int tempValue = 2*strToInt(binValue[j])+strToInt(binValue[j+1]);
    valueToReturn[k] = intToStr(tempValue);
    tempValue = 0;
    k++;
    j = 2;
    while(i >= 0 && j < 8) {
        tempValue += pow(2, i)*strToInt(binValue[j]);
        i--;
        j++;
        if(i == -1) {
            valueToReturn[k] = intToStr(tempValue);
            tempValue = 0;
            i = 2;
            k++;
        }
    }
    return valueToReturn;
}

char* decToHex(int value) {
    int i = 3, j = 0, k = 0;
    char binValue[8];
    strcpy(binValue, decToBin(value));
    char *valueToReturn = malloc(sizeof(char)*2);
    int tempValue = 0;
    while(i >= 0 && j < 8) {
        tempValue += pow(2, i)*strToInt(binValue[j]);
        i--;
        j++;
        if(i == -1) {
            valueToReturn[k] = intToStr(tempValue);
            tempValue = 0;
            i = 3;
            k++;
        }
    }
    return valueToReturn;
}

void askIp(int ip[]) {
    int tableLength = 8;
    char a[tableLength], b[tableLength], c[tableLength], d[tableLength];
    printf("Enter an ip address: ");
    scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);
    printf("===================================================================\
\n");
    printf("Your IP address in decimal    : %d.%d.%d.%d\n", ip[0], ip[1], ip[2]\
            , ip[3]);
    strcpy(a, decToHex(ip[0]));
    strcpy(b, decToHex(ip[1]));
    strcpy(c, decToHex(ip[2]));
    strcpy(d, decToHex(ip[3]));
    printf("Your IP address in hexadecimal: %s.%s.%s.%s\n", a, b, c, d);
    strcpy(a, decToOct(ip[0]));
    strcpy(b, decToOct(ip[1]));
    strcpy(c, decToOct(ip[2]));
    strcpy(d, decToOct(ip[3]));
    printf("Your IP address in octal      : %s.%s.%s.%s\n", a, b, c, d);
    strcpy(a, decToBin(ip[0]));
    strcpy(b, decToBin(ip[1]));
    strcpy(c, decToBin(ip[2]));
    strcpy(d, decToBin(ip[3]));
    printf("Your IP address in binary     : %s.%s.%s.%s\n", a, b, c, d);
    printf("===================================================================\
\n");
}

int main(char *args) {
    int tableLength = 4;
    int ip[tableLength];
    askIp(ip);
    return 0;
}

