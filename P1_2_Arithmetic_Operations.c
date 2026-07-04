//Program to perform arithmetic operations on to decimal operands.
#include<stdio.h>
int main()
{
    float x,y;

    printf("Enter first number:\n");
    scanf("%f" , &x);

    printf("Enter second number:\n");
    scanf("%f" , &y);

    printf("The sum of %f and %f is: %.2f \n" , x,y,x+y);
    printf("The difference of %f and %f is: %.2f \n" , x,y,x-y);
    printf("The multiplication of %f and %f is: %.2f \n" , x,y,x*y);
    if(y!=0)
    printf("The division of %f and %f is: %.2f \n" , x,y,x/y);
    else
    printf("Division is not possible.");

    return 0;

}