#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    char newstring[100];
    scanf("%s\n",s);
    int l = strlen(s)-1;
    int i=0;
    while (s[i] != '\0'){
        newstring[i] = s[l];
        i++;
        l--;
    }
    printf("Reversed String is: %s\n",newstring);
    return 0;
}