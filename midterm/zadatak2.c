#include <stdio.h>

int main() {
   char recenica[21];
   int pozicija, duljina = 0;
   printf("Upisite niz > ");
   fgets(recenica, 21, stdin);
   printf("Upisite poziciju > ");
   scanf("%d", &pozicija);

   for (int i = 0; i < 21; i++) {
      if (recenica[i] == '\n') {
         recenica[i] = '\0';
         break;
      } else if (recenica[i] == '\0') {
         break;
      } else {
         duljina++;
      }
   }
   pozicija--;
   //printf("Duljina: %d   Pozicija: %d\n", duljina, pozicija);
   if (pozicija < 0 || pozicija > duljina - 1)
      printf("Neispravna pozicija");

   else {
      printf("Rezultat: ");
      
      for (int i = pozicija; i < duljina - 1; i++) {
         if (recenica[i + 1] >= '0' && recenica[i + 1] <= '9')
            recenica[i] = 'X';

         else if (recenica[i + 1] >= 'A' && recenica[i + 1] <= 'Z')
            recenica[i] = recenica[i + 1] + 'a' - 'A';

         else
            recenica[i] = recenica[i + 1];
     }
     recenica[duljina - 1] = '\0';
     printf("%s", recenica);
   }

   return 0;
}