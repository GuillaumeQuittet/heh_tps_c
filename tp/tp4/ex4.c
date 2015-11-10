#include <stdio.h>
#include <string.h>

void make_table(char table[][11])
{
    strcpy(table[0], "1");
    strcpy(table[1], "2");
    strcpy(table[2], "3");
    strcpy(table[3], "4");
    strcpy(table[4], "5");
    strcpy(table[5], "6");
    strcpy(table[6], "7");
    strcpy(table[7], "8");
    strcpy(table[8], "9");
    // Pour un char on ne doit pas mettre de pointeur
    // Pour les str on doit mettre un pointeur ca créé un tableau de char
    strcpy(table[9], "10");
    strcpy(table[10], "11");

    strcpy(table[11], "Kayvinne");
    strcpy(table[12], "Djezonne");
    strcpy(table[13], "Azerty");
    strcpy(table[14], "Tux");
    strcpy(table[15], "Mint");
    strcpy(table[16], "Sparky");
    strcpy(table[17], "Mabite");
    strcpy(table[18], "Brayyane");
    strcpy(table[19], "Shawaik");
    strcpy(table[20], "Alali");
    strcpy(table[21], "PlusDeNom");
}

int main()
{
    // 22 = nombre d element et 11 = taille de la chaine de caractère :D
    char prenom[22][11];
    make_table(prenom);
    int number = 0;
    while(number < 1 || number > 11)
    {
        printf("Enter a player number: ");
        scanf("%d", &number);
    }
    printf("The player number %d is %s.\n", number, prenom[10+number]);
    return 0;
}
