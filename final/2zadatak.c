#include <stdio.h>


struct vektor_s {
    int komp_i;
    int komp_j;
} vektori[7], rezultat;

void SumaVektora(struct vektor_s *pok, int n, struct vektor_s *rez) {
	(rez)->komp_i = 0;
	(rez)->komp_j = 0;
	for (int i = 0; i < n; i++) {
		rez->komp_i += (pok + i)->komp_i;
		rez->komp_j += (pok + i)->komp_j;
	}
	
	return;
}


int main() {
	vektori[0].komp_i = 1;
	vektori[0].komp_j = -3;
	
	vektori[1].komp_i = -2;
	vektori[1].komp_j = 8;

	vektori[2].komp_i = 4;
	vektori[2].komp_j = 5;
	
	vektori[3].komp_i = 3;
	vektori[3].komp_j = -14;
	
	vektori[4].komp_i = 2;
	vektori[4].komp_j = 2;
	
	vektori[5].komp_i = 6;
	vektori[5].komp_j = -6;
	
	vektori[6].komp_i = 1;
	vektori[6].komp_j = -1;
	
	SumaVektora(&vektori[0], 7, &rezultat);
	
	printf("%d %d\n", rezultat.komp_i, rezultat.komp_j);
	return 0;
}