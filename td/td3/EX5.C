#include <stdio.h>
#include <math.h>

float get_volum(float r)
{
    return 4/3 * M_PI * r*r*r;
}

int main()
{
    float radius;
    printf("Enter a radius : ");
    scanf("%f", &radius);
    float volum = get_volum(radius);
    printf("%f\n", volum);
    return 0;
}
