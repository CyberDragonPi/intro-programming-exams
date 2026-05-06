//Koju naredbu treba dodati na mjesto znakova XXXXXX kako bi omogućili 
//da funkcija f tijekom prvih 5 poziva vraća broj 1, a za svaki od sljedećih poziva broj 0?
#include <stdio.h>

int f(void) {
    static int i = 1; //XXXXXX
    int rez = 1;
    if (i > 5) rez = 0;
    else i++;
    return rez;
}

int main(void) {
    int i;
    for (i = 0; i < 10; i++) printf("%d", f());  // treba ispisati 1111100000
    return 0;
}