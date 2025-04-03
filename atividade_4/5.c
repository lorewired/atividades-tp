#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

int _stoi(char * s) {
  int n = 0;
  for(int i = 0; s[i]; i++) {
    n += s[i] - '0';
    if(s[i+1]) n *= 10;
  }
  return n;
}

int main() {
  char s[100];
  scanf("%s", s);
  printf("%d\n", _stoi(s));
  return 0;
}