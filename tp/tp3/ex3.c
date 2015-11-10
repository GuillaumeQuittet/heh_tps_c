#include <stdio.h>

int main()
{
    int table[10];
    table[0] = 0;
    table[1] = 10;
    table[2] = 20;
    table[3] = 30;
    table[4] = 40;
    table[5] = 50;
    table[6] = 60;
    table[7] = 70;
    table[8] = 80;
    table[9] = 90;
    for (int i = 0; i < 10; i++)
    {
        int* ptr = &table[i];
        printf("%d ", *ptr);
    }
    printf("\n");
    return 0;
}
