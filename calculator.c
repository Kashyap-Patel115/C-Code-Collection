// ==========================================
// Professional Calculator in C
// Author: Kashyap Patel
// Description: Menu-driven calculator
// ==========================================

#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        printf("\n=========================================\n");
        printf("         PROFESSIONAL CALCULATOR\n");
        printf("=========================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("=========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = num1 + num2;

                printf("\nResult = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = num1 - num2;

                printf("\nResult = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = num1 * num2;

                printf("\nResult = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                if(num2 == 0)
                {
                    printf("\nError! Division by zero is not allowed.\n");
                }
                else
                {
                    result = num1 / num2;
                    printf("\nResult = %.2lf\n", result);
                }
                break;

            case 5:
            {
                int a, b;

                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);

                if(b == 0)
                {
                    printf("\nError! Modulus by zero is not allowed.\n");
                }
                else
                {
                    printf("\nResult = %d\n", a % b);
                }
                break;
            }

            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);

                result = pow(num1, num2);

                printf("\nResult = %.2lf\n", result);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);

                if(num1 < 0)
                {
                    printf("\nError! Square root of a negative number is not possible.\n");
                }
                else
                {
                    result = sqrt(num1);
                    printf("\nResult = %.2lf\n", result);
                }
                break;

            case 8:
                printf("\nThank you for using the calculator!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 8);

    return 0;
}