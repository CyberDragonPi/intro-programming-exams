//Napišite listu parametara koja nedostaje u definiciji funkcije taj_element (označena sa XXXXXXXXX) 
//koja ispisuje element matrice u predzadnjem retku i predzadnjem stupcu.
#include <stdio.h>

void taj_element(int *c, int b, int a) {
    int tmp = a * b;
    b = -a - 2;
    printf("%d", c[tmp + b]);
    return;
}

int main(void) {
   int m, n;
   scanf("%d %d", &m, &n);
   int p[m][n];
   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
         scanf("%d", &p[i][j]);
      }
   }
   
   //printf("%d %d", p[0], p[1]);
   taj_element(p[0], m, n);
   
   return 0;
   
}
