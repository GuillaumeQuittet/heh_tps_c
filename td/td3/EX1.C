#include <stdio.h>


float farhr, celsius;

// Ask and convert a Fahrenheit value to a Celsius value
float farhr_to_celsius()
{
    printf("Enter a temperature in Fahrenheit scale : ");
    scanf("%f", &farhr);
    printf("%f\n", farhr);
    return 5*(farhr-32)/9;
}

int main()
{
    // Ask to the user the value for the conversion
    celsius = farhr_to_celsius();
    printf("The temperature in Celsius scale is : %f\n", celsius);
    return 0;
}
