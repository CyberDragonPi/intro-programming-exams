#include <stdio.h>

int main() {
   int aJedan, aDva, maxSuma;
   int suma = 0;

   printf("Upisite tri prirodna broja > ");
   scanf("%d %d %d", &aJedan, &aDva, &maxSuma);
   
   printf("Rezultat: ");
   for (int i = 0; i >= 0; i++) {
      int trenutni;
      if (i == 0) {
         trenutni = aJedan;
         suma += trenutni;
      } else if (i == 1) {
         trenutni = aDva;
         suma += trenutni;
      } else {
         trenutni = (i %2 == 0) ? aJedan * 3 : aJedan * 2;
         aJedan = aDva;
         aDva = trenutni;
         suma += trenutni;
      }

      if (suma < maxSuma) {
         if (i == 0)
            printf("%d", trenutni);
       
         else
            printf(", %d", trenutni);
      } else
         break;
   }

   return 0;
}
         
            