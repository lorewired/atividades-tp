#include <stdio.h>

/*   /\_/\
*   (= ._.)
*   / >  \>
*/

char* wich_month(int n) {
  char* ans;
  switch(n) {
    case 1: ans = "Janeiro"; break;
    case 2: ans = "Fevereiro"; break;
    case 3: ans = "Março"; break;
    case 4: ans = "Abril"; break;
    case 5: ans = "Maio"; break;
    case 6: ans = "Junho"; break;
    case 7: ans = "Julho"; break;
    case 8: ans = "Agosto"; break;
    case 9: ans = "Setembro"; break;
    case 10: ans = "Outubro"; break;
    case 11: ans = "Novembro"; break;
    case 12: ans = "Dezembro"; break;
    default: ans = "Numero fora do intervalo";
  }
  return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%s\n", wich_month(n));
  return 0;
}