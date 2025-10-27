#include<stdio.h>

void fun(){
    printf("GFG\n");
}

int main(){

    void (*fun_ptr)() = fun;
    fun_ptr();
    return 0;
}