#include <stdio.h>

double area(double r)
{
  return 3.14159 * (r * r);
}

int main() 
{
  double r;
  scanf("%lf", &r);
  printf("%lf\n", area(r));
  return 0;
}