#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci of %d is %d.\n", n, fibonacci(n));
    return 0;
}
