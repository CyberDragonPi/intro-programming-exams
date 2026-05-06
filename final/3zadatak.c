#include <stdio.h>
#include <stdlib.h>

void igra(int seed, int brojBacanja, int *pobjednik, int *razlika) {
	srand(seed);
	
	int sumaPrvi = 0;
	int sumaDrugi = 0;
	
	for (int i = 0; i < brojBacanja; i++) {
		int x = (int)rand() % (6 - 1 + 1) + 1;
		int y = (int)rand() % (6 - 1 + 1) + 1;
		
		sumaPrvi += x;
		sumaDrugi += y;
		printf("brojevi: %d %d\n", x, y);
	}
	
	//printf("sume: %d %d \n", sumaPrvi, sumaDrugi);
	if (sumaPrvi > sumaDrugi) {
		*pobjednik = 1;
		*razlika = sumaPrvi - sumaDrugi;
	} else if (sumaPrvi == sumaDrugi) {
		*pobjednik = 0;
		*razlika = 0;
	} else {
		*pobjednik = 2;
		*razlika = sumaDrugi - sumaPrvi;
	}	
	return;
}


int main() {
	int pobjednik, razlika;
	int n;
	
	igra(3, 3, &pobjednik, &razlika);
	printf("%d %d\n", pobjednik, razlika);
	return 0;
}
	