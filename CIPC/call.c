#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)calloc(5, sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        printf("%d \n\n", arr[i]);  // all 0s

    free(arr);
    return 0;
}