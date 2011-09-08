

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv)
{
    char *greeting;
    char *farewell;


    greeting = "hello";

    farewell = malloc(sizeof(char) * 4);
    farewell [0] = 'b';
    farewell [1] = 'y';
    farewell [2] = 'e';
    farewell [3] = '\0';

    printf("%s -> %u\n", greeting, (unsigned int) &greeting);
    printf("%s   -> %u\n", farewell, (unsigned int) &farewell);

    greeting[0] = 'm';

    return 0;
}
