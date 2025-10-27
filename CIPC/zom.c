#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child process exiting...\n");
        _exit(0);
    } else {
        printf("Parent sleeping, not calling wait()...\n");
        sleep(20); // Parent ignores the child
    }

    return 0;
}