#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter choice 1 for ADD 2 for SUB 3 for MUL:\n");
    scanf("%d",&c);
if(c==1){
    printf("SUM is:%d\n",a+b);
}
else if (c==2){
     printf("SUB is:%d\n",a-b);
}
else if (c==3){
     printf("MUL is:%d\n",a*b);
}
else{
    printf("Invalid Choice\n");
}

 return 0;
}