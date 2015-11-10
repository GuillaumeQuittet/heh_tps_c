#include <stdio.h>

int factorial(int n)
{
    int number = 1;
    for(int i = 1; i <= n; i++)
    {
        number *= i;
    }
    return number;
}

int main()
{
    int n = 6;
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}
