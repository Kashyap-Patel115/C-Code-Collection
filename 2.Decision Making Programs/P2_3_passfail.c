//Program to check whether student is pass or fail based on average of four subject marks.
#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, average;
 
    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &sub4);

    average = (sub1 + sub2 + sub3 + sub4) / 4;

    printf("Average Marks = %.2f\n", average);

    if (average >= 35)
    {
        printf("Result: PASS");
    }
    else
    {
        printf("Result: FAIL");
    }

    return 0;
}