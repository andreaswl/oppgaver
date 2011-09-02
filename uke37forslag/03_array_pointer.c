
#include <stdio.h>


int main(int argc, const char *argv[])
{
    short arr[] = {2, 1, -1, 10, 22, 21};
    int i, len;
    len = 6;

    /* original: */
    for (i=0; i<len; i++)
        printf("[%d]: %d\n", i, arr[i]);
    
    /* using pointers: */
    for (i=0; i<len; i++)
        printf("[%d]: %d\n", i, *(arr + i));

    return 0;
}
