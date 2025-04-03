#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

int fat(int n) {
  return n == 2 ? 1 : n * fat(n-1);
}

int calc_comb(int n, int p) {
  return fat(n) / (fat(p) * fat(n - p));
}

int main() {
  int n, p;
  scanf("%d%d", &n, &p);
  printf("%d\n", calc_comb(n, p));
  return 0;
}