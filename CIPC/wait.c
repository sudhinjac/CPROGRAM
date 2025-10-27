#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child: running\n");
        sleep(2);
        printf("Child: exiting\n");
        _exit(0);
    } else {
        printf("Parent: waiting for child\n");
        wait(NULL);
        printf("Parent: child finished, no zombie!\n");
    }

    return 0;
}