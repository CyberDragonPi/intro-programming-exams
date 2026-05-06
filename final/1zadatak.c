#include <stdio.h>

/* POCETAK DEFINICIJE */
// m - broj redaka matrice
int nulovanje(int *p, int m, int n) {
	int najveci = *p;
	int maxr = 0, maxs = 0;
	int suma = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (*(p + i * n + j) > najveci || (*(p + i * n + j) == najveci && ((i > maxr) || (i == maxr && j < maxs)))) {
				najveci = *(p + i * n + j);
				maxr = i;
				maxs = j;
			}
		}
	}
	
	for (int i = 0; i < m; i++) {
		suma += *(p + i * n + maxs);
		*(p + i * n + maxs) = 0;
	}
	
	for (int j = 0; j < n; j++) {
		suma += *(p + maxr * n + j);
		*(p + maxr * n + j) = 0;
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", *(p + i * n + j));
		}
		printf("\n");
	}	
    return suma;  
}


int main(void) {
   int matrica[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 9, 2, 1, 2, 3, 4};
   int vrijednost = nulovanje(&matrica[0][0], 4, 4);
   printf("%d\n", vrijednost);
   return 0;
   
}