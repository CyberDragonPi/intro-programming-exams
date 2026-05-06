int main(void) {
    int prvi, drugi, djel, visek;
    scanf("%d %d", &prvi, &drugi);
    maxDjelIMinVisek(prvi, drugi, &djel, &visek);                 //POZIVFUNKCIJE
    printf("Djelitelj: %d, višekratnik: %d. \n", djel, visek);
    return 0;   
}

void maxDjelIMinVisek (int broj1, int broj2, int *djelitelj, int *visekratnik);