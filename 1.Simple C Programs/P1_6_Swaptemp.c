#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter number a:");
    scanf("%d", &a);

    printf("Enter number b:");
    scanf("%d", &b);

    printf("Before Swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    a=temp;
    a=b;
    b=a;

    printf("After Swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}


    

    



