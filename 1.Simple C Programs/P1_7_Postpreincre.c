//Program to explain difference between post and pre increment
#include<stdio.h>

int main()
{
    int num, result;

    printf("Enter a value: ");
    scanf("%d", &num);

    result = num++;

    printf("\nUsing post increment (result = num++):");
    printf("\nResult = %d", result);
    printf("\nCurrent value of num = %d", num);

    printf("\n\nEnter another value: ");
    scanf("%d", &num);

    result = ++num;

    printf("\nUsing pre increment (result = ++num):");
    printf("\nResult = %d", result);
    printf("\nCurrent value of num = %d", num);

    return 0;
}