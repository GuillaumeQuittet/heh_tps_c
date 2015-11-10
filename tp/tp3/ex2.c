#include <stdio.h>

int main()
{
    int multiplication_table[10][10];
    // Make a table with i as height and j as length
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multiplication_table[i][j] = (i+1) * (j+1);
            printf("%3d ", multiplication_table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
