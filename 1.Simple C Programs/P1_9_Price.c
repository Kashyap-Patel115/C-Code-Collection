//Program to write price into rupees and paisa
#include<stdio.h>
int main()
{
    float price;
    int r,p;

    printf("Enter the price:");
    scanf("%f", &price);

    r=price/1;
    p=(price-r)*100;

    printf("Result is: %d rupees %d paisa", r,p);

    return 0;
}