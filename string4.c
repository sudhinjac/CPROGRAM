#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    char a[20];

    strcpy(s, "geeks for");
    strcpy(a, " geek");

    // append at most sizeof(s) - strlen(s) - 1 characters
    strncat(s, a, sizeof(s) - strlen(s) - 1);

    printf("Concatenated string is: %s\n", s);
    return 0;
}