#include <stdio.h>

float x, y;

int isSameSign(float x, float y)
{
    int return_value = (x > 0 && y > 0 || x < 0 && y < 0 || x == 0 && y == 0) ? 0: 1;
    return return_value;
}

int main()
{
    printf("Enter 2 numbers : ");
    scanf("%f %f", &x, &y);
    printf(isSameSign(x, y) == 0 ? "True\n": "False\n");
    return 0;
}
