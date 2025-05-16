#include <stdio.h>
#define tam 30

int main () {
	
int dias[tam];
int i, j, temp;
float media, soma, maiores;

printf ("Digite as 30 temperaturas medias do mes: \n\n");
	
for (i = 0; i < 30; i++) {
	
	printf ("Dia %d: ", i + 1);
	scanf ("%d", &dias[i]);	
}

printf ("\n");

	
for (i = 0; i < 30; i++) {

soma = soma + dias[i];
media = soma / 30;
	
}

printf ("A media geral das temperaturas foi: %f \n", media);
printf ("Os dias com a temperatura acima da media e suas respectivas temperaturas foram: :\n ");
	
for (i = 0; i < 30; i++) {
	
	if (dias[i] > media) {
		
		maiores = dias[i];
		printf ("Dia %d, com a temperatura (%.1f) \n", (i + 1), maiores);

}
}

for (i = 0; i < 30; i++) {
	
for (j = 0; j < 30; j++){

if (dias[j] > dias[j + 1]) {
	
temp = dias[j];
dias[j] = dias[j + 1];
dias[j + 1] = temp;
	
}	
}
}

printf ("A maior temperatura entre os dias eh %d, do dia %d \n", dias[30], (dias[30] = dias[i]) );
printf ("A menor temperatura entre os dias eh %d no dia %d \n", dias[0],  (dias[1] = dias[i]));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
