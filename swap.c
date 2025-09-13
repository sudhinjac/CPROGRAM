#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;  // a now becomes 15
    b = a - b;  // b = 15 - 10 = 5
    a = a - b;  // a = 15 - 5 = 10

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}