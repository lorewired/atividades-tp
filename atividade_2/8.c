#include <stdio.h>
#include <string.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

#define MAX 100005
typedef long long ll;

ll fib(ll n, ll* memo) {
  if(n <= 2) return 1;
  if(memo[n] != -1) return memo[n];
  return memo[n] = fib(n-1, memo) + fib(n-2, memo);
}

int main() {
  ll n;
  scanf("%lld", &n);
  ll memo[MAX];
  memset(memo, -1, sizeof(memo));
  printf("%lld\n", fib(n, memo));
  return 0;
}