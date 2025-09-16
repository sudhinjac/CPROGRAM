#include<stdio.h>

int main(){

    int x=10;
    void *p1 = &x;
    //de refrence void pointer usigng type casting
    printf("%d\n",*(int *)p1);
    return 0;
}