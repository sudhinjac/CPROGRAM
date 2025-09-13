#include<stdio.h>

int main(){

    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);

    if (x>0){
        printf("Positieve number: \n");
        if (x%2==0){
            printf("The number is Even\n");
        }
        else{
           printf("The number is odd\n");
        }
    }
    else if (x<0){
        printf("Negatieve number:\n");
        if (x%2==0){
            printf("The number is even:\n");
        }
        else {
            printf("The number is odd:\n");
        }
    }
}