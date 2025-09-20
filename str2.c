#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];

    printf("Enter 2 strings:\n");
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (strncmp(s1, s2, strlen(s2)) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}