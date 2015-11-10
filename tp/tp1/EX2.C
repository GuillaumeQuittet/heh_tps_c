#include <stdio.h>
#include <math.h>

float a, b, c;

float delta(float a, float b, float c)
{
    return (b*b)-4*a*c;
}

float root_1(float a, float b)
{
    printf("%f", -b/(2*a));
    return 0;
}

float root_2(float a, float b, float delta_value)
{
    printf("%f\n", (-b-sqrt(delta_value))/2*a);
    printf("%f\n", (-b+sqrt(delta_value))/2*a);
    return 0;
}


int is_root(float a, float b, float c)
{
    float delta_value = delta(a, b, c);
    if(delta_value < 0)
        return 0;
    else
    {
        if(delta_value > 0)
           root_2(a, b, delta_value);
        else
           root_1(a, b);
    }
}


int main()
{
    printf("Enter the variables (a b c) : ");
    scanf("%f %f %f", &a, &b, &c);
    is_root(a, b, c);
    return 0;
}
