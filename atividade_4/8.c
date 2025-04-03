#include <stdio.h>
#include <string.h>

int find_sub_string(char * s, char * s2) {
  int sz1 = strlen(s), sz2 = strlen(s2);
  int ans = -1;
  for (int i = 0; i <= sz1 - sz2; i++) {
    int j;
    for (j = 0; j < sz2; j++) {
      if (s[i + j] != s2[j]) break;
    }
    if (j == sz2) ans = i;
  }
  return ans;
}

int main() {
  char s[100], s2[100];
  fgets(s, 100, stdin);
  scanf("%s", s2);
  printf("%d\n", find_sub_string(s, s2));
  return 0;
}
