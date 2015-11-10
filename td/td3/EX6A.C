#include <stdio.h>
#include <math.h>

float x=-1, y=0;

float car_to_pol_r(float x, float y)
{

    float r = sqrt(x*x + y*y);
    return r;
}

float car_to_pol_teta(float x, float y)
{
    float teta = atan(y/x);
    return teta;
}

int main()
{
    // x must be > 0 and y >= 0
    while(x <= 0 || y < 0)
    {
        // Ask the coordinates to the user
        printf("Enter x and y coordinates : ");
        scanf("%f %f", &x, &y);
    }
    float r    = car_to_pol_r(x, y);
    float teta = car_to_pol_teta(x, y);
    printf("%f %f\n", r, teta);
    return 0;
}
