#include<stdio.h>

int main(){

    int arr[] = {10,20};
    int *ptr = arr;
    *ptr++;
    printf("%d,%d,%d\n\n",arr[0],arr[1],*ptr);
    return 0;
}