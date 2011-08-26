

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char *argv[])
{
    int i, times;

    if (argc == 3) {
        times = atoi(argv[1]);
        for (i=0; i<times; i++)
            printf("%s ", argv[2]);
            printf("\n");
    } else {
        printf("Oppgi to parametere.\n");
    }
    return 0;
}
