#include "get_next_line.h"
#include <stdio.h>
char *get_next_line(int fd)
{
    char *mybuf;
    int isread;

    mybuf = (char *)malloc(BUFFER_SIZE + 1);
    if(!mybuf)
        return (NULL);
    
    isread = read(fd,mybuf,BUFFER_SIZE);
    if(isread == -1)
    {
        printf("okunmadi");
        free(mybuf);
        return (NULL);
    }
    printf("%s\n",mybuf);
    return mybuf;
}