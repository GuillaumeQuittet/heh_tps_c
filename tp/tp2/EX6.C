#include <stdio.h>

/*
 * Print the x first multiplier of an y number.
 */
int first_multiplier(int x, int y)
{
    for(int i = 1; i <= x; i++)
    {
        printf("%d*%d=%d\n", i, y, i*y);
    }
    return 0;
}

int main()
{
    int x, y;
    printf("x =? ");
    scanf("%d", &x);
    printf("y =? ");
    scanf("%d", &y);
    first_multiplier(x, y);
    return 0;
}
