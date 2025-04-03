#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define inf INT_MAX
const int mod = 1e9+7;

#define MAX 25

void desenha_retangulo_solido(int n, int m, char c)
{
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++)
    {
      printf("%c", c);
    }
    printf("\n");
  }
}

signed main()
{
  desenha_retangulo_solido(5, 20, 'M');
  return EXIT_SUCCESS;
}