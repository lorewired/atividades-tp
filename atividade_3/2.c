#include <stdio.h>

char* vogais = "aeiou";

int vogal(char c)
{
  for(size_t i = 0; i < 5; i++)
    if(vogais[i] == c)
      return 1;
  return 0;
}

int main() {
  char c;
  scanf("%c", &c);
  printf("%d\n", vogal(c));
  return 0;
}
