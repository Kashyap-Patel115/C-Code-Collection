//Program to check whether a number is armstrong or not
#include <stdio.h>

int main()
{
    int n, temp, ld, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong number.", temp);
    else
        printf("%d is not an Armstrong number.", temp);

    return 0;
}




































