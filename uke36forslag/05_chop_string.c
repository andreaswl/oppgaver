

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* chop_string(char *str)
{
    int len;
    len = strlen(str);
    printf("%c\n", str[3]);
    str[len/2] = '\0';
    return str + ((len + 1) / 2);
}


int main(int argc, const char *argv[])
{
    char *a = "heisann hoppala";
    char *b;

    b = malloc(sizeof(char) * (strlen(a) + 1));
    strcpy(b, a);
    a = b;

    printf("before:  %s\n", a);

    b = chop_string(a);
    
    printf("a after: %s\n", a);
    printf("b after: %s\n", b);
      
    return 0;
}
