#include <stdio.h>

int main() {
   int a = 65;
   float x = 0.2f;
   printf("%d:%c:%.2f\n", a - 65, a, x);
   printf("%d:%c:%.2f\n", a + 100, a + 3, x + 0.045f);
   printf("%d:%c:%.2f\n", a + 5000, a + 1, x + 100.044f);
   return 0;
}

//FORMAT treba zamijeniti sa "%d:%c:%.2f\n"
//0:A:0.20
//165:D:0.25
//5065:B:100.24