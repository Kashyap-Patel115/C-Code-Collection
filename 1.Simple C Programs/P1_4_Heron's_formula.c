//Program to find area of triangle using heron's formula
#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, s, Area;

    printf("Enter the 1st side :");
    scanf("%f", &a);

    printf("Enter the 2nd side :");
    scanf("%f", &b);

    printf("Enter the 3rd side :");
    scanf("%f", &c);

    s = (a + b + c) / 2;

    Area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea of Reactangle is %f ", Area);

    return 0;
}








