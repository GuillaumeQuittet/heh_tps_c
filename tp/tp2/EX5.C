#include <stdio.h>


/*
 * Draw a square
 * param n size
 */
int draw_square(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    draw_square(n);
    return 0;
}
