#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

int greater(char* s1, char* s2) {
  int i = 0;
  while(s1[i] && s2[i]) {
    if(s1[i] < s2[i]) return -1;
    if(s1[i] > s2[i]) return 1;
    i++;
  }
  return 0;
}

int main() {
  char s1[100];
  char s2[100];
  scanf("%s %s", s1, s2);
  printf("%d\n", greater(s1, s2));
  return 0;
}