#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "geeks-for-geeks, c courses";
    const char *sep = "- ,";
    char *token = strtok(str,sep);
    while (token !=NULL){
        printf("%s\n",token);
        token = strtok(NULL,sep);
    }
    return 0;
}