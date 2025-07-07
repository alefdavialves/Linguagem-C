#include <stdio.h>
#define tam 15

int main () {


int vet [tam];
int i, maiores;
float media, soma;

printf ("Digite 15 numeros: \n\n");
	

for (i = 0; i < 15; i++) {
	
	printf ("Digito %d: ", i + 1);
	scanf ("%d", &vet[i]);	
}

for (i = 0; i < 15; i++) {

soma = soma + vet[i];
	
}

for (i = 0; i < 15; i++) {
	
	media = (soma / 15);
	
}

printf ("A media desses numeros eh: %.1f \n\n", media);

printf ("Os maiores que a media sao:");

for (i = 0; i < 15; i++) {
	
if (vet[i] > media) {
	
	maiores = vet[i];
	
	printf (" %d ", maiores);
}

}


return 0;
}
