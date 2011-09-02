

#include <stdio.h>
#include <string.h>

char* chop_string(char *str)
{
    int len;
    len = strlen(str);
    str[len/2] = '\0';
    return str + (len + 1) / 2;
}


int main(int argc, const char *argv[])
{
    char *a = "heisann hoppsann";
    char *b;

    printf("before: %s\n")
    return 0;
}
