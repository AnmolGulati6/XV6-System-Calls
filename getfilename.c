#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int getfilename(int fd, char* buf, int n);


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf(2, "Usage: getfilename <filename>\n");
        exit();
    }
    // Open the file to get a file descriptor
    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        printf(2, "getfilename: cannot open %s\n", argv[1]);
        exit();
    }
    char buf[256]; // Buffer to hold the filename from the system call

    // Call the getfilename system call
    int result = getfilename(fd, buf, sizeof(buf));
    if (result < 0) {
        printf(2, "getfilename: failed to get filename for fd %d\n", fd);
        close(fd);
        exit();
    }

    // Print the filename retrieved by the system call
    printf(1, "XV6_TEST_OUTPUT Open filename: %s\n", buf);

    // Close the file descriptor
    close(fd);

    exit();
}



