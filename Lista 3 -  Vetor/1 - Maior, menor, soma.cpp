#include <stdio.h>
#define tam 20

int main () {
	
	int vet [tam];
	int i;
	
	printf ("Digite 20 numeros: \n\n");
	

for (i = 0; i < 20; i++) {
	
	printf ("Digito %d: ", i + 1);
	scanf ("%d", &vet[i]);
	
	
}

int j, temp;
	

for (i = 0; i < 20; i++) {
	
for (j = 0; j < 20; j++){

if (vet[j] > vet[j + 1]) {
	
temp = vet[j];
vet[j] = vet [j + 1];
vet [j + 1] = temp;
	
}	
}
}

int soma;

for (j = 0; j < 20; j++){
	
soma = (soma + vet[j]);	

}

printf ("O maior numero entre eles eh %d \n", vet[20]);
printf ("O menor numero entre eles eh %d \n", vet[0]);
printf ("A soma entre eles eh %d", soma);
	
	return 0;
}
