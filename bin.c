#include <stdio.h>
#include <string.h>

void reverse(char *ans) {
    char newstring[100];
    int l = strlen(ans) - 1;
    int i = 0;

    while (ans[i] != '\0') {
        newstring[i] = ans[l];
        i++;
        l--;
    }
    newstring[i] = '\0'; // terminate string
    printf("Reversed String is: %s\n", newstring);
}

int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);

    int i = 0;
    char ans[100];

    if (n == 0) { // handle 0 explicitly
        ans[i++] = '0';
    }

    while (n > 0) {
        int rem = n % 2;
        ans[i++] = rem + '0';
        n = n / 2; // divide by 2 to get next bit
    }

    ans[i] = '\0'; // terminate string

    printf("The binary number (reversed) is: %s\n", ans);
    reverse(ans);

    return 0;
}