#include <stdio.h>

void update(int* num)
{
  *num = 0;
}

int main()
{
  int num = 5678;
  printf("%d\n", num);
  update(&num);
  printf("%d\n", num);
}
