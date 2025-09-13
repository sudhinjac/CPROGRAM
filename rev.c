#include<stdio.h>

int main(){

    int y,x,sum;
    
    printf("Enter the number: \n");
    scanf("%d",&x);
    y=x;
    sum =0;
    while (x > 0) {
    sum = sum*10+x%10;
    printf("%d\n",sum);
    x = x/10;

    }
    printf("\n The reverse of %d is %d. \n",y,sum);
    return 0;
}