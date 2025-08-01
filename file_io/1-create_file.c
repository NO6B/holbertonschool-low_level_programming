#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int create_file(const char *filename, char *text_content)
{
    int fd;
    int w = 0;
    int len = 0;

    if (filename == NULL)
    {
        return (0);
    }

    fd = open(filename, O_CREAT | O_WRONLY);
    if (fd == -1)
    {
        return (-1);
    }
    
    if (text_content != NULL)
    {
        while (text_content[len])
        {
            len++;
        }
        if (w == -1)
        {
            return (-1);
        }
        

    }
    close(fd);
    return (1);
}
