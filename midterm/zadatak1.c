#include <stdio.h>

int main() {
   int n = -1;

   while (n == -1) {
      int x;
      printf("Upisite n > ");
      scanf("%d", &x);
      if (x >= 0)
         n = x;
   }

   int matrica[n][n];

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &matrica[i][j]);
      }
   }

   for (int i = 0; i < n; i++) {
      if (i %2 == 0)
         matrica[i][n - i - 1] = 0;
      
      else 
         matrica[i][n - i - 1] = 1;
   }

   printf("Rezultat:\n");

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%3d", matrica[i][j]);
      }
      printf("\n");
  }
  
  return 0;
}