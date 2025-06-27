#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    char *a = get_next_line(fd);
    char *b =get_next_line(fd);
    printf("%s",b);
    free(a);
    free(b);

    close(fd);
}