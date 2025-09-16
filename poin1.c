#include<stdio.h>


void fun(int *ptr){

    *ptr = *ptr+5;
}


int main(){

    int x=10;
    fun(&x);
    printf("%d\n",x);
    int arr[] = {10,20,30,40,50,60};
    int *ptr = arr;
    printf("%d %p \n",*ptr,ptr);
    ptr++;
    printf("%d %p \n",*ptr,ptr);
     ptr=ptr+3;
    printf("%d %p \n",*ptr,ptr);
        ptr=ptr-2;
    printf("%d %p \n",*ptr,ptr);
    return 0;
}