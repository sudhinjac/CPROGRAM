#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter string:\n");
    scanf("%s",s);
    int base =1;
    int ans =0;
    int last_index = strlen(s) -1;

    for (int i = last_index; i>=0; i--){
        int convert_num = s[i] - 48;
        ans = ans +(convert_num * base);
         base = base *2;
    }
    printf("%d\n",ans);
    return 0;
}