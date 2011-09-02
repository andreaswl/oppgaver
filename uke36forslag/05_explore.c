

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, const char *argv[])
{
    char  mem[10];
    unsigned char input;
    char* aring = "å";

    mem[9] = '\0';

    printf("Print uninitialized string: %s\n", mem);
    printf("Address of string (pointer value): %u\n", (unsigned int) mem);
    
    printf("Norwegian letter: %s\n", aring);
    printf("Length of Norwegian letter: %d\n", strlen(aring));

    printf("Enter some characters, enter to send, ctrl-c to exit.\n");
    while((input = getchar()) != EOF)
        printf("%d\n", input);
    
    return 0;
}
