
#include <stdio.h>
#include <string.h>


int strcmpx(unsigned char s1[], unsigned char s2[])
{
    int i;

    for (i = 0; ; i++) {
        if ((i >= strlen(s1)) && i <  strlen(s2)) return -1;
        if ((i >= strlen(s2)) && i <  strlen(s1)) return 1;
        if ((i >= strlen(s2)) && i >= strlen(s1)) return 0;

        if (s1[i] - s2[i] != 0) return s1[i] - s2[i];
    }
    return 0;
}

void test(unsigned char s1[], unsigned char s2[])
{
    printf("%3d  %3d  %7s  %7s\n", strcmp(s1, s2), strcmpx(s1,s2), s1, s2);
}

int main() {

  printf("strcmp strcmpx s1       s2\n");

  test("Abc", "Abc");
  test("Abc", "Ab");
  test("Ab",  "Abc");
  test("AbC",  "ABC");
  test("", "Vyrr");
  test("Hei",  "");
  test("",  "");
  test("en", "to");
  return 0;
}
