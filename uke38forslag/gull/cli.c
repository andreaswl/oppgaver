
#include <stdio.h>
#include "gem.h"
#include "debug.h"


void Cli_print_gem()
{
    printf("%s\n", (char*) Gem_get_random());
}

void Cli_menu_prompt()
{
    printf("[g]ullkorn [a]vslutt :) > ");
}

char Cli_choose()
{
    char choice;
    switch(choice = getc(stdin))
    {
      case 'g':   Cli_print_gem();  break;
      case '\n':  Cli_menu_prompt();break;
      case  -1:   choice = 'a';
      case 'a':   break;
      default:
        printf("Ukjent kommando: %c\n", choice);
    }
    return choice;
}

void Cli_loop()
{
    DLOG("Starting CLI loop..\n");
    Cli_menu_prompt();
    while(Cli_choose() != 'a');
    DLOG("Leaving CLI loop..\n");
}

int main()
{
    DLOG("DEBUG is set.\n");
    Cli_loop();
    DLOG("Peacefully shut down.\n");
    return 0;
}

