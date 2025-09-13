#include<stdio.h>

int main() {

    int x,n,sum=0;
    printf("Enter the day number from 0 to 7:\n");
    scanf("%d",&x);
    printf("Enter the days before you want to find out:\n");
    scanf("%d",&n);
    sum=n%7;
    sum=x-sum;
    if (sum<0){
        sum=sum+7;
        printf("The day before is: %d\n",sum);
    } else {
        printf("The day before is: %d\n",sum);
    }
    return 0;

}