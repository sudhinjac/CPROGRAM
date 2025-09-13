#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter Third number:\n");
    scanf("%d",&c);

    if(a>=b && a>=c){
        printf("%d is the largest of 3 numbers\n",a);
    } 
    else if (b>=a && b>=c){
         printf("%d is the largest of 3 numbers\n",b);
    }
 else{
    printf("%d is the largest of 3 numbers\n",c);
 }
 return 0;
}