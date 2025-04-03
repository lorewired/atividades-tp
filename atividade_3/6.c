#include <stdio.h>

void to_lower_case(char* str)
{
  for(int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] > 96 && str[i] < 123)
    {
      str[i] -= 32;
    }
  }
}

int main()
{
  char str[100];
  scanf("%s", str);
  to_lower_case(str);
  for(int i = 0; str[i] != '\0'; i++)
  {
    printf("%c", str[i]);
  }
  return 0;
}