#include <stdio.h>

struct record {
    int code;
    int x;
    int y;
};


_Bool txt2bin(char *inputFile, char *outputFile) {
	FILE *ulazna = NULL, *izlazna = NULL;
	struct record zapis;
	if (fopen(inputFile, "r") == NULL) {
		return 0;
	} else if (fopen(outputFile, "wb") == NULL) {
		fclose(ulazna);
		return 0;
	} else {
		
		ulazna = fopen(inputFile, "r");
		izlazna = fopen(outputFile, "wb");
		int kod, x, y;
		while(fscanf(ulazna, "%2d%3d%3d\n", &kod, &x, &y) == 3) {
			zapis.code = kod;
			zapis.x = x;
			zapis.y = y;
			
			fseek(izlazna, sizeof(zapis) * (kod - 1), SEEK_SET);
			fwrite(&zapis, sizeof(zapis), 1, izlazna);
		}
		fclose(ulazna);
		fclose(izlazna);
		return 1;
	}
}


int main() {
	_Bool uspio = txt2bin("input.txt", "output.bin");
	printf("%d", uspio);
	return 0;
}
