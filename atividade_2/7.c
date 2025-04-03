#include <stdio.h>
#include <math.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

int is_prime(double n) {
  int _sqrt = sqrt(n);
  for(int i = 2; i <= _sqrt; i++) {
    if((int) n % i == 0) return 0;
  }
  return 1;
}

int main() {
  double n;
  scanf("lf", &n);
  if(is_prime(n)) {
    printf("E primo\n");
  } else {
    printf("E primo\n");
  }
  return 0;
}