#include <stdio.h>

void l2(char c) {
  for(int i = 0; i < 25; i++) {
    printf("%c", c);
  }
  printf("\n");
}

int main() {
  l2('*');
  printf("CMP 1048\n");
  l2('@');
  printf("Técnicas de Programação\n");
  l2('+');
  return 0;
}
