#include <stdio.h>

int pgcd(int a, int b)
{
    int div;
    if (a > b)
        div = a;
    else if (a == b)
        return a;
    else
        div = b;

    while(a%div != 0 || b%div != 0)
    {
        div--;
    }
    return div;
}

int main()
{
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    printf("PGCD: %d\n", pgcd(a, b));
}
