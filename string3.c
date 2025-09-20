#include<stdio.h>
#include<string.h>

int main(){

    char str[5];
    strncpy(str,"gfg",sizeof(str)-1);
    printf("%s\n",str);
    strncpy(str,"geeksforgeeks",sizeof(str)-1);
    str[4] = '\0';
    printf("%s\n",str);
    return 0;

}