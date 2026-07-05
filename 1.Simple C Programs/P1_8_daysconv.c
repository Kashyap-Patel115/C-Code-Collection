//Program to convert days entered users in year,month and days format
#include<stdio.h>
int main()
{
    int days,y,m,d,rd;
    
    printf("Enter no. of days:");
    scanf("%d", &days);

    y = days/365;
    rd = days%365;
    m = rd/30;
    d = rd%30;

    printf("Result is: %d years %d months %d days.", y,m,d);
    return 0;

}