#include<stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("Celsius temperature is  %.2f \n", celsius);

    return 0;
}