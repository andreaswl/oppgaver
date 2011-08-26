
#include <stdio.h>


char* Gem_get_random()
{
    switch(random() % 6) {
      case 0: return("Bli og glad, hipp hurra!");
      case 1: return("Ut på tur, aldri sur!");
      case 2: return("Evig optimist!");
      case 3: return("Tommelen opp!");
      case 4: return("Hurra!");
      case 5: return("Tommelen opp, dette er topp!");
    }
}

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
      case '\n':  Cli_menu_prompt();    break;
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

