#include <stdio.h>
#define MAX 10

int main(void) {
    struct {
        int sif_art;
        int kolicina; // količina artikla sa šifrom sif_art na skladištu
        float cijena; // cijena pojedinačnog artikla sa šifrom sif_art
    } artikli[MAX] = ...;  
    // izostavljena je inicijalizacija strukture u kojoj je inicijalizirano upravo MAX elemenata
    
    int i;
    float ukupna_cijena;
    
    //treba samo ovo između ovog komentara
    ukupna_cijena = 0.0;
    for (i = 0; i < 10; i++)
       ukupna_cijena = ukupna_cijena + artikli[i].kolicina * artikli[i].cijena;
    //i ovog komentara

    printf("%5.2f\n", ukupna_cijena);
    return 0;
}