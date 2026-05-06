#include <stdio.h>

int main() {
   int polje[10], koliko = 0, suma = 0;

   for (int i = 0; i < 10; i++) {
      int x;
      scanf("%d", &x);

      if (x == 0)
         break;

     polje[i] = x;
     koliko++;
     suma += x;
   } 
	
   float srednjaVrijednost, varijanca;
   if (koliko != 0) {
      srednjaVrijednost = (float)suma / koliko;
      varijanca = 0.0;

      for (int i = 0; i < koliko; i++)
         varijanca = varijanca + (srednjaVrijednost - polje[i]) * (srednjaVrijednost - polje[i]);

      varijanca = varijanca / koliko;

   } else {
      srednjaVrijednost = 0.0;
      varijanca = 0.0;
   }

   printf("%.2f, %.2f", srednjaVrijednost, varijanca);
   return 0;
}
   