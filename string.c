#include<stdio.h>
#include<string.h>

int main(){

    char s[] = "geek";
    char a1[] = {'g','e','e','k','\0'};

    printf("%s  %s\n",s,a1);
    printf("%zu %zu\n",sizeof(s),sizeof(a1));
    printf("%d %d\n", strlen(s),strlen(a1));
    return 0;
}