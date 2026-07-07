//Program to check student's grade based on his marks.

#include <stdio.h>
int main()
{
    int m;

    printf("Enter your marks (Out of 100): ");
    scanf("%d", &m);

    if (m < 0 || m > 100)
    {
        printf("Invalid Marks");
    }
    else if (m >= 80)
    {
        printf("Distinction");
    }
    else if (m >= 60)
    {
        printf("1st Class");
    }
    else if (m >= 35)
    {
        printf("2nd Class");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}