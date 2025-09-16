#include<stdio.h>

int main(){

    int *ptr = 0;
    if (ptr==NULL){
        printf("Yes\n\n");
    }
    int * p1 =NULL;
    if (p1){
        printf("Not Null \n\n");
    }
    else {
        printf("NULL\n\n\n");
    }
    return 0;
}