//Program to check which number is largest among three.
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter first number:");
    scanf("%d" , &a);
    printf("Enter second number:");
    scanf("%d" , &b);
    printf("Enter third number:");
    scanf("%d" , &c);

    if(a>b){
        if(a>c){
            printf("%d is largest among three.", a);
        }
        else{
            printf("%d is largest among three.", c);
        }
    }
    
    if(b>a){
        if(b>c){
        printf("%d is largest among three.", b);
    }
        else{
        printf("%d is largest among three.", c);
    }
}
    
return 0;
 
}