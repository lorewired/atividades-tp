#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

void alt(char * s) {
  for(int i = 0; s[i]; i++) {
    if(s[i] >= 'A' &&  s[i] <= 'Z') s[i] += 32;
    else if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
  }
}

int main() {
  char s[100];
  scanf("%s", s);
  alt(s);
  printf("%s\n", s);
  return 0;
}