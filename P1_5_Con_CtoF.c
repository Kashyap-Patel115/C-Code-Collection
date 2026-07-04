#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ( 9/5 * celsius) + 32;

    printf("fahrenheit temperature is  %.2f \n", fahrenheit);

    return 0;
}