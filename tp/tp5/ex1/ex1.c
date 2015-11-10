#include <stdio.h>
#include "ex1.h"

void show_table(float table[], int table_size)
{
    printf("[");
    for (int i = 0; i < table_size-1; i++)
    {
        printf("%f, ", table[i]);
    }
    printf("%f]\n", table[table_size-1]);
}

void tri_insertion_croissant(float table[], int table_size)
{
    float temp = 0;
    for (int i = 0; i < table_size; i++)
    {
        for (int j = 0; j < table_size; j++)
        {
            if (table[i] < table[j])
            {
                temp = table[j];
                table[j] = table[i];
                table[i] = temp;
            }
        }
    }
}

void tri_insertion_decroissant(float table[], int table_size)
{
    float temp = 0;
    for (int i = 0; i < table_size; i++)
    {
        for (int j = 0; j < table_size; j++)
        {
            if (table[i] > table[j])
            {
                temp = table[j];
                table[j] = table[i];
                table[i] = temp;
            }
        }
    }
}

int main()
{
    int choix = 0;
    float table[10] = {5, 4, 8, 3, 9, 6, 2, 7, 4, 3};
    int table_size = sizeof(table)/sizeof(table[0]);
    while(choix < 1 || choix > 2)
    {
        printf("Quelle sorte de tri voulez-vous?\n");
        printf("1) Croissant\n2) Décroissant\nChoix: ");
        scanf("%d", &choix);
    }
    switch(choix)
    {
        case 1:
            show_table(table, table_size);
            tri_insertion_croissant(table, table_size);
            break;
        case 2:
            show_table(table, table_size);
            tri_insertion_decroissant(table, table_size);
            break;
    }
    show_table(table, table_size);
    return 0;
}
