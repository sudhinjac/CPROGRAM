#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "usage: %s <string>\n", argv[0]);
        return 1;
    }

    /* UNSAFE: passing user input directly as format string */
    printf(argv[1]);
    printf("\n");
    return 0;
}