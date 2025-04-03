#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define inf INT_MAX
const int mod = 1e9+7;

void desenha_retangulo(int n, int m, char out, char in)
{
  for(size_t i = 0; i < n; i++)
  {
    char cc = !i || i == n-1 ? out : in;
    printf("%c", out);
    for(size_t j = 0; j < m-2; j++)
    {
      printf("%c", cc);
    }
    printf("%c\n", out);
  }
}

signed main()
{
  desenha_retangulo(5, 15, '#', '-');
  return EXIT_SUCCESS;
}