#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    printf("Before fork()\n");

    pid = fork();  // Create a new process

    if (pid < 0) {
        perror("fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child process
        printf("Child Process: PID = %d, Parent PID = %d\n", getpid(), getppid());
    }
    else {
        // Parent process
        printf("Parent Process: PID = %d, Child PID = %d\n", getpid(), pid);
    }

    printf("Common section executed by both processes\n");

    return 0;
}