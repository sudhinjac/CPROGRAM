#include<stdio.h>

int main(){

    int x=0,y=0;
    char c;
    printf("Enter the move L or R or U or D\n");
    scanf("%c",&c);
    switch(c){
        case 'L':
        {
            x--;
            break;
        }
        case 'R':
        {
            x++;
            break;
        }
        case 'U':
        {
            y++;
            break;
        }
        case 'D':
        {
            y--;
            break;
        }
        default:
        {
            printf("Invalid choice.\n");
        }
    }
    printf(" position is %d,%d\n",x,y);
}