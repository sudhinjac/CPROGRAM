#include<stdio.h>
#include<stdlib.h>

int *getArray(int n){

    int *ptr = malloc(sizeof(int) * n);
    for(int i=0; i<n;i++){
        ptr[i]=i+1; //*(ptr+1) = i+1
       
    }
    return ptr;
}

int main(){

    int n = 5;
    int *ptr = getArray(n);

    for(int i =0; i<n; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}