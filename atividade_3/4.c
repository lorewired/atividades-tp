#include <stdio.h>

void is_perfect(int n)
{
  int s = 0, c = 0, nums[n];
  for(int i = 1; i < n; i++)
  {
    if(n % i == 0)
    {
      s += i;
      nums[c++] = i;
    }
  }
  int perf = s == n;
  if(perf)
  {
    printf("%d=", n);
    for(int i = 0; i < c; i++)
    {
      printf("%d", nums[i]);
      if(i+1<c) printf("+");
    }
    printf("\n");
  }
}

int main()
{
  for(int i = 1; i <= 10000; i++)
  {
    is_perfect(i);
  }
  return 0;
}