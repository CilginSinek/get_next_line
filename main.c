#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd = 0;
    get_next_line(fd);
    close(fd);
}