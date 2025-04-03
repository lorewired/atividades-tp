#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

typedef long long ll;

ll fat(ll n) {
  if(n == 1) return 1;
  return n * fat(n-1);
}

int main() {
  ll n;
  scanf("%lld", &n);
  printf("%lld\n", fat(n));
  return 0;
}