
#include <stdio.h>
#include "gem.h"



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
    Cli_menu_prompt();
    while(Cli_choose() != 'a');
}

int main()
{
    Cli_loop();
}

