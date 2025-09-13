#include<stdio.h>

int main(){

    int x =10;
    printf("%p\n",&x);
    printf("%d\n",*&x);
    int *p;
    p=&x;
    //it prints the value stored in the address of p
    printf("%d\n",*p);
    // it prints the address of variable x
    printf("%p\n",p);
    // address of the pointer variable
    printf("%p\n",&p);
}