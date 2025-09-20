#include<stdio.h>
#include<string.h>

int main(){

    char s[] = "gfg";
    char a[] = "courses";

printf("%d\n",strcmp(s,a));
printf("%d\n",strcmp(s,"gfg"));
printf("%d\n",strcmp(s,"GFG"));
printf("%d\n",strcmp(s,"gf"));
printf("%d\n",strcmp(s,"hf"));

    return 0;
}