#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

double vol(double r) {
  return (4*3.14159) / 3 * (r * r * r);
}

int main() {
  double r;
  scanf("%lf", &r);
  printf("%lf\n", vol(r));
  return 0;
}