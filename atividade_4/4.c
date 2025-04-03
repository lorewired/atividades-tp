#include <stdio.h>
#include <stdlib.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

int len(char * s) {
  int c = 0;
  while(s[c]) c++;
  return c;
}

char* concat(char * s1, char * s2) {
  int s1_len = len(s1);
  int s2_len = len(s2);
  char * ans = (char *) malloc(s1_len + s2_len + 1);
  int idx = 0;
  for(int i = 0; i < s1_len; i++) ans[idx++] = s1[i];
  for(int i = 0; i < s2_len; i++) ans[idx++] = s2[i];
  return ans;
}

int main() {
  char s1[100];
  char s2[100];
  scanf("%s %s", s1, s2);
  char * ans = concat(s1, s2);
  printf("%s\n", ans);
  free(ans);
  return 0;
}