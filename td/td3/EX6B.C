#include <stdio.h>
#include <math.h>

float r, teta;

float pol_to_car_x(float r, float teta)
{

    float x = r*cos(teta);
    return x;
}

float pol_to_car_y(float r, float teta)
{
    float y = r*sin(teta);
    return y;
}

int main()
{
    // Ask the coordinates to the user
    printf("Enter the radius and the teta : ");
    scanf("%f %f", &r, &teta);
    float x = pol_to_car_x(r, teta);
    float y = pol_to_car_y(r, teta);
    printf("%f %f\n", x, y);
    return 0;
}
