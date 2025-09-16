#include <stdio.h>

int x = 42;

void change_pointer(int **pp) {
    *pp = &x;  // Change the caller's pointer to point to x
}

int main() {
    int *ptr = NULL;

    printf("Before: ptr = %p\n", (void*)ptr);

    change_pointer(&ptr);  // Pass address of ptr

    printf("After: ptr = %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}