#include<stdio.h>
#include<stdlib.h>

int A =1800;

int main(){

    long long sum = 0;

    int i;
    int *nums = (int *)malloc(1000000 * sizeof(int));
    for (i=1; i<=9000000000; i++){

        sum sum+i;
    }
    printf("Sum: %lld\n\n",sum);
    free();
    return 0;
}