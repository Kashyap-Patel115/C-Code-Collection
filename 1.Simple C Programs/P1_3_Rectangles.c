/*Program that will obtain length and breadth of rectangle from user 
  and calculate area,perimeter and diagonal*/
#include<stdio.h>
#include<math.h>
int main()
{
    float l,b;

    printf("Enter the length of the rectangle:\n");
    scanf("%f", &l);

    printf("Enter the breadth of the rectangle:\n");
    scanf("%f", &b);

    printf("\nArea of rectangle: %.2f" , l*b);
    printf("\nPerimeter of rectangle: %.2f" , 2*(l+b));
    printf("\nDiagonal of rectangle: %.2f" , sqrt(l*l+b*b));   

    return 0;
}