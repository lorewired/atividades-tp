#include <stdio.h>
#include <string.h>

int is_palindrome(char* s)
{
  int sz = 0;
  for(int i = 0; s[i] != '\0'; i++, sz++);
  char aux[100];
  for(int i = sz-1, j = 0; i >= 0; i--, j++) *(aux+j) = *(s+i);
  int pal = strcmp(s, aux);
  return pal ? 0 : 1;
}

int main() {
  char s[100];
  scanf("%s", s);
  printf("%d\n", is_palindrome(s));
  return 0;
}
