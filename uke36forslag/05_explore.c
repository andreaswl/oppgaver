

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, const char *argv[])
{
    char  mem[10];
    unsigned char input;
    char* aring = "å";
    char* allocated = malloc(sizeof(char)*10);

    mem[9]        = '\0';
    allocated[9]  = '\0';

    printf("Print declared, but uninitialized string: %s\n", mem);
    printf("Address of declared string (pointer value): %u\n", (unsigned int) mem);
    
    printf("Print allocated, but uninitialized string: %s\n", allocated);
    printf("Address of allocated string (pointer value): %u\n", (unsigned int) allocated);
    
    printf("Norwegian letter: %s\n", aring);
    printf("Length of Norwegian letter: %d\n", strlen(aring));
    printf("Address of Norwegian letter: %u\n", (unsigned int) aring);

    printf("Enter some characters, enter to send, ctrl-c to exit.\n");
    while((input = getchar()) != EOF)
        printf("%d\n", input);

    free(allocated);
    
    return 0;
}
