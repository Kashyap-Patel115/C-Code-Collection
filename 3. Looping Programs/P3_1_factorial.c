//Program to find factorial of number.
#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long fact=1;

    printf("Enter the number:");
    scanf("%d" , &n);

    for(i=1;i<=n;i++){
        fact = fact * i ;
    }

    printf("The factorial of %d is: %llu" , n,fact);
    return 0;
}