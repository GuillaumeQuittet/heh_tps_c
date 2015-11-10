#include <stdio.h>

int main()
{
    float a1 = 0, b1 = 0;
    float a2 = 0, b2 = 0;
    printf("Enter z1 (a + b i): ");
    scanf("%f + %f i", &a1, &b1);
    printf("Enter z2 (a + b i): ");
    scanf("%f + %f i", &a2, &b2);
    printf("%f + %f i\n", a1+a2, b1+b2);
    return 0;
}
