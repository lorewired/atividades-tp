#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

typedef long long ll;

ll sum_of_strs(char * s, char * s2) {
  ll x = 0, y = 0, i = 0;
  while(s[i]) {
    x += s[i] - '0';
    if(s[++i]) x *= 10;
  }
  i = 0;
  while(s2[i]) {
    y += s2[i] - '0';
    if(s2[++i]) y *= 10;
  }
  return x + y;
}

int main() {
  char s[100], s2[100];
  scanf("%s %s", s, s2);
  printf("%lld\n", sum_of_strs(s, s2));
  return 0;
}