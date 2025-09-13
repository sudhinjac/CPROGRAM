#include<stdio.h>

int main(){

    int x,ans;
    printf("Enter the number:\n");
    scanf("%d",&x);
    if (x<0){
        ans = -(x%10);
    }
    else {
        ans = (x%10);
    }
    printf("The last digit of the number %d is %d\n",x,ans);
    return 0;
}