#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

float average(float n1, float n2, float n3) {
  return (n1 + n2 + n3) / 3;
}

int main() {
  float n1, n2, n3;
  scanf("%f%f%f", &n1, &n2, &n3);
  printf("%f", average(n1, n2, n3));
  return 0;
}