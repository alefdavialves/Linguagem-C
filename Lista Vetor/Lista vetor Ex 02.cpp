#include <stdio.h>
#define tam 12

int main () {
	
int vet1 [tam] = {35000, 18500, 23800, 25000, 13900, 7800, 21900, 30000, 16600, 24100, 26500, 42400};
int mes[tam];
int soma;
	
int j, i, k;

for (i = 0; i < 12; i++) {
	
	mes[i] = (2000 + (vet1[i] * 0.015));
}

for (i = 0; i < 12; i++) {
	
	soma = (soma + mes[i]);
	
}
	

for (i = 0; i < 12; i++) {



printf ("O valor do mes %d: %d \n", (i + 1), mes[i]);
		
}

printf ("\n");

printf ("A soma de todos os meses eh: %d", soma);

	return 0;
	
}
