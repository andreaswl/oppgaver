

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_abbr(char* sentence, int grab_chars)
{
    int i, grab_count;
    
    grab_count = 0;
    for (i=0; i<strlen(sentence); i++) {
        if (sentence[i] == ' ') {
            grab_count = 0;
        } else if (grab_count < grab_chars) {
            putchar(sentence[i]);
            grab_count++;
        }
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    switch (argc) {
        case 2:
            print_abbr(argv[1], 1);
            break;
        case 3:
            print_abbr(argv[1], atoi(argv[2]));
            break;
        case 1:
        default:
          printf("Oppgi en eller to parametre.\n");
    }
    return 0;
}
