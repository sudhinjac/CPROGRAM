#include <unistd.h>  // for write()
#include <string.h>  // for strlen()

int main() {
    const char *message = "Hello, Linux System Calls!\n";

    // write(fd, buffer, length)
    // fd = 1 (standard output)
    write(1, message, strlen(message));

    return 0;
}