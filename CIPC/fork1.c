// fork_wait_example.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid;
    int status;

    printf("Parent PID = %d: about to fork a child\n", getpid());

    pid = fork();
    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // Child process
        printf("Child: PID = %d, Parent PID = %d\n", getpid(), getppid());
        /* Simulate work in child */
        for (int i = 1; i <= 3; ++i) {
            printf("Child: working... step %d/3\n", i);
            sleep(1);
        }
        printf("Child: done. Exiting with code 42\n");
        _exit(42);  // use _exit in child after fork
    } else {
        // Parent process
        pid_t w = waitpid(pid, &status, 0); // wait for the specific child
        if (w == -1) {
            perror("waitpid");
            exit(EXIT_FAILURE);
        }

        printf("Parent: waitpid returned PID = %d\n", w);

        if (WIFEXITED(status)) {
            printf("Parent: child exited normally, exit status = %d\n", WEXITSTATUS(status));
        } else if (WIFSIGNALED(status)) {
            printf("Parent: child was terminated by signal %d\n", WTERMSIG(status));
        } else {
            printf("Parent: child terminated abnormally (other)\n");
        }

        printf("Parent: continuing and exiting\n");
    }

    return 0;
}