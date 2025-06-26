#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd = open("lorem.txt", O_RDONLY);
    int x;

    x = 1;
    while (x--)
    {
        printf("%s\n",get_next_line(fd));
    }
    close(fd);
}