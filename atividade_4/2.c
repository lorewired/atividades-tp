#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

void alt(char* s) {
  int l = -1, r = -1, len = strlen(s);
  for(int i = 0; i < len && l == -1; i++) {
    if(isalpha(s[i])) {
      l = i;
    }
  }
  for(int j = len-1; j >= 0 && r == -1; j--) {
    if(isalpha(s[j])) {
      r = j;
    }
  }
  if(l != -1 && r != -1) {
    for(int i = l; i <= r; i++) printf("%c", s[i]);
  }
}

int main() {
  char s[100];
  fgets(s, 100, stdin);
  alt(s);
  return 0;
}