#include <stdio.h>

int main()
{
   float a, b;

    // Ask the real part and the imaginary unit to the user
    printf("Enter the real number : ");
    scanf("%f", &a);
    printf("Enter the imaginary unit : ");
    scanf("%f", &b);

    // Show the complex number
    printf("z = %f + i * %f\n", a, b);
}
