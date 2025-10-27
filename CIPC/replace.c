#include <fcntl.h>    // for open()
#include <unistd.h>   // for read(), write(), lseek(), close()
#include <string.h>   // for strlen()
#include <stdio.h>    // only for perror()

int main() {
    int fd;
    char buffer[256];
    ssize_t bytes_read;
    const char *old_name = "Rohan";
    const char *new_name = "Mohan";

    // 1️⃣ Open the file for reading and writing
    fd = open("author.txt", O_RDWR);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    // 2️⃣ Read the entire file content into buffer
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read < 0) {
        perror("Error reading file");
        close(fd);
        return 1;
    }

    buffer[bytes_read] = '\0';  // Null-terminate

    // 3️⃣ Find the position of "Rohan" inside the buffer
    char *pos = strstr(buffer, old_name);
    if (pos == NULL) {
        write(1, "Name 'Rohan' not found in file\n", 31);
        close(fd);
        return 0;
    }

    // 4️⃣ Calculate offset position in file
    off_t offset = pos - buffer;

    // 5️⃣ Move the file pointer to that position using lseek()
    if (lseek(fd, offset, SEEK_SET) == -1) {
        perror("Error using lseek");
        close(fd);
        return 1;
    }

    // 6️⃣ Overwrite "Rohan" with "Mohan"
    if (write(fd, new_name, strlen(new_name)) < 0) {
        perror("Error writing to file");
        close(fd);
        return 1;
    }

    close(fd);
    return 0;
}
