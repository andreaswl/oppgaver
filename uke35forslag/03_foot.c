
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int input, foot, inches;

    switch (argc) {
        case 2:
            input   = atoi(argv[1]);
            foot    = input / 12;
            inches  = input % 12;
            printf("%d inches is %d foot and %d inches.\n", input, foot, inches);
            break;
        default:
            printf("You must provide one argument.\n");
    }
    return 0;
}
