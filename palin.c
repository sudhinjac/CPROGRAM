#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    int start =0;
    printf("Enter string\n");
    scanf("%s",s);
    int end = strlen(s)-1;

    while (start < end) {
        if (s[start] != s[end]) {
            printf("No");
            return 0;
        }
        else {
            start++;
            end--;
        }
    }
    
    printf("The string %s is palindrome\n\n",s);
    return 0;
    
}