



#include <stdio.h>
#include "gem.h"


char* Gem_get_random()
{
    switch(random() % 6) {
      case 0: return("Bli og glad, hipp hurra!");
      case 1: return("Ut på tur, aldri sur!");
      case 2: return("Evig optimist!");
      case 3: return("Tommelen opp!");
      case 4: return("Hurra!");
      case 5: return("Tommelen opp, dette er topp!");
      default: return("ERROR!");
    }
}


