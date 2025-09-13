#include<stdio.h>
#include<stdbool.h>

int main(){

    int x =5;
    // short circuiting the logical operators that means if first is flase
    // it wont check later part.
    bool res = (x>10 && x++);
    printf("%d\n",res);
    printf("%d\n",x);
    bool res1 = (x>2 || x++);
    printf("%d\n",res1);
    printf("%d\n",x);
    return 0;
}