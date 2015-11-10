#ifndef EX7_H
#define EX7_H

typedef struct word word;

struct word
{
    char french[99];
    char english[99];
};

// The functions
int startMenu();
char encode(word table[]);
void readFile(FILE fichier);
void toLower(word table[]);
int randomNumber(int n);
int frenchToEnglish(word table[]);

#endif // EX7_H
