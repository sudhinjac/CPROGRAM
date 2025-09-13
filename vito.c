#include<stdio.h>

int main(){

   //x*2^y right shift x/2^y

    int x=3,y=4;
    printf("left shift by 1: %d\n",x<<1);
    printf("left shift by 2: %d\n",x<<2);
    printf("left shift by y: %d\n",x<<y);
     x=33;
     y=4;
    printf("Right shift by 1: %d\n",x>>1);
    printf("Right shift by 2: %d\n",x>>2);
    printf("Right shift by y: %d\n",x>>y);

    // not operators
    unsigned int a = 1;
    printf("NOT:%u\n",~a);

}