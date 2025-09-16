#include<stdio.h>

int main(){

    int arr[] ={10,20,30};
    int *ptr =arr;
    printf("%zd\n",sizeof(arr));
    printf("%zd\n",sizeof(ptr));
    printf("%d\n",*(arr+2));
    printf("%d\n",ptr[2]);
    return 0;

}