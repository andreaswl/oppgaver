

/* Oppgave 1: Fibonacci-tall */



void printfibs()
{
    int a, b, sum;
    a = 0;
    b = 1;

    while(1)
    {
        printf("%d, ", a);
        sum = a + b;
        a   = b;
        b   = sum;
    }
}

/* NB: treg! Flere mulige forbedringer. */
int fib(n)
{
    switch(n) {
        case 0:   return 0;
        case 1:   return 1;
        default:  return fib(n - 2) + fib(n - 1);
    }
}



int main(int argc, char* argv[])
{
    switch(argc) {
        
        int num;

        case 1:
            printfibs();
            break;
        case 2:
            num = fib(atoi(argv[1]));
            printf("%d\n", num)
            break;
        default:
            printf("For mange parametre.\n");
    }
    return 0;
}
