#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

int main() {
  char* s;
  scanf("%s", s);
  int c = 0;
  for(int i = 0; s[i]; i++) c++;
  printf("%d\n", c);
  return 0;
}