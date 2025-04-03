#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

void dec(int* n, int p) {
  while(*n % p == 0) *n /= p;
}

int is_reg(int n) {
  dec(&n, 2);
  dec(&n, 3);
  dec(&n, 5);
  return n == 1;
}

int main() {
  int n;
  scanf("%d", &n);
  if(is_reg(n)) {
    printf("E regular\n");
  } else {
    printf("Nao e regular\n");
  }
  return 0;
}
