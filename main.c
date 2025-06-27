#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    //char buff[42];
    printf("%s",get_next_line(fd));
    //printf("%s",get_next_line(fd));
    //printf("%s",get_next_line(fd));
/*      int x;

    x = 2;
    while (x--)
    {
        printf("%s",get_next_line(fd));
    } */
    close(fd);
}