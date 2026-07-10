#include<stdio.h>
 int main()
 {
    int n,i,count=0;

    printf("Enter the number:");
    scanf("%d" , &n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        printf("The %d is prime number.",n);
    }
    else{
        printf("The %d is not prime number.",n);
    }

    return 0;
 }