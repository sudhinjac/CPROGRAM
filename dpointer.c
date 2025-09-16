#include<stdio.h>

int x=10;

void change(int **pp){

    *pp=&x;
}

int main(){

    int *p = NULL;
    change(&p);
    if (p==NULL){
        printf("Not changed \n\n");
    }
    else{
        printf("%d\n",*p);
    }
    return 0;
}