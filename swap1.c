#include <stdio.h>

int main() {
    char a = 'A', b = 'Z';

    printf("Before swap: a = %c, b = %c\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %c, b = %c\n", a, b);
    return 0;
}