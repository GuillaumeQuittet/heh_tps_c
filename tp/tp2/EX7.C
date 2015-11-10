#include <stdio.h>


/*
 * Draw a triangle
 * param n size of the base and the height
 */
int draw_triangle(int n)
{
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < x; i++)
        {
            printf("*");

        }
        x++;
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    draw_triangle(n);
    return 0;
}
