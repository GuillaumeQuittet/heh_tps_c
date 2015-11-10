#include <stdio.h>

int main()
{
    int numbers_table[10];
    numbers_table[0] = 0;
    numbers_table[1] = 0;
    numbers_table[2] = 0;
    numbers_table[3] = 0;
    numbers_table[4] = 0;
    numbers_table[5] = 0;
    numbers_table[6] = 0;
    numbers_table[7] = 0;
    numbers_table[8] = 0;
    numbers_table[9] = 0;
    printf("Enter 10 numbers: ");
    int index = 0;
    while(numbers_table[index] == 0)
    {
        scanf("%d\n", &numbers_table[index]);
        index++;
    }
    int number_even = 0;
    printf("Table content ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", numbers_table[i]);
        number_even += (numbers_table[i]%2) == 0 ? 1: 0;
    }
    printf("\n");
    printf("The table contain %d even numbers.\n", number_even);
    return 0;
}
