#include<stdio.h>
int main()
{
    float s,p,r,t;

    printf("Enter the principal amount:");
    scanf("%f", &p);
    printf("\nEnter the rate of interest:");
    scanf("%f", &r);
    printf("\nEnter the no. of years:");
    scanf("%f", &t);

    s=(p*r*t)/100;

    printf("\nThe simple interest is:%f" , s);

    return 0;
    
}