

#include <stdio.h>

#define BOOL2S(v) v ? "true" : "false"


int main(int argc, const char *argv[])
{
    printf("Should be true: %s\n", BOOL2S(1));
    printf("Should be false: %s\n", BOOL2S(0));
    return 0;
}

/* Merk at dette ikke er et spesielt realistisk eksempel.
 * Man burde nok heller skrevet en funksjon for å løse oppgaven.
 */
