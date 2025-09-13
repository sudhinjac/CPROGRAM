#include<stdio.h>

int main(){

    int n,sum=0;

    printf("Enter the number to find out sum up to N natural numbers: \n");
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    printf("Sum of %d natural numbers is: %d\n\n",n,sum);
    return 0;
}