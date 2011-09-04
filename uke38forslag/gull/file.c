
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"

char *File_get_line(FILE *fd, int maxlen)
{
    char *buf, *result;
    int bytes_read;
    result = NULL;
    buf = malloc(maxlen+1);

    if (getline(&buf, &maxlen, fd) != -1)
    {
      result = malloc(strlen(buf) + 1);
      strcpy(result, buf);
      result[strlen(result)-1] = '\0'; /* chop off \n */
    }
    free(buf);
    return result;
}

int File_path_exists(char* path)
{
    int exists;
    FILE* fd;
    fd = fopen(path, "r");
    exists = (fd != NULL);
    if (exists) fclose(fd);
    return exists;
}

