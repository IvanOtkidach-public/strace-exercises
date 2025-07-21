// bug5.c
// Problem: Attempts to open file without read permissions
// strace will show open() with EACCES (Permission denied)
// You should not be root to imitate a problem
#include <fcntl.h>
#include <unistd.h>

int main() {
    // First create a file without read permissions
    int fd = open("/tmp/secret", O_CREAT | O_WRONLY, 0200);  // Write-only
    write(fd, "success", 6);
    close(fd);
    
    // Then try to read it
    fd = open("/tmp/secret", O_RDONLY);  // Will fail due to permissions
    char buf[10];
    read(fd, buf, sizeof(buf));
    write(STDOUT_FILENO, buf, sizeof(buf));
    return 0;
}
