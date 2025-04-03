#include <stdio.h>

int is_cons(char c) {
  return c >= 97 && c <= 122 ? 1 : 0;
}

int main() {
  char c;
  scanf("%c", &c);
  printf("%d\n", is_cons(c));
  return 0;
}