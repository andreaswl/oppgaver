
#include <stdio.h>

int main() {
  char* str = "hei\0 du!";
  printf("%s", str);
  printf("\n");
  printf("%s", str + 5);
}
