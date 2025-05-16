#include <stdio.h>
#define tam 10

int main () {

int vet1[tam], vet2[tam], vet3[tam], vet4[tam];
int i,j, temp;

for (i = 0; i < 10; i++){
	
	printf ("Digite o %d numero: ", (i+1));
	scanf ("%d", &vet1[i]);
	
}
	
//Crescente
for (j = 0; j < 9; j++) {
	vet2[j] = vet1[j];
}

for (i = 0; i < 10; i++) {
		
for (j = 0; j < 10; j++) {
	
if (vet2[j] > vet2[j+1]) {

temp = vet2[j];
vet2[j] = vet2[j+1];
vet2[j+1] = temp;
}
}		
}

printf ("A ordem crescente dos numeros eh: ");

for (i = 0; i < 10; i++){
	
printf (" %d ", vet2[i]);
	
}	

printf ("\n\n");


//Descrescente	

for (j = 0; j < 9; j++) {
	
	vet3[j] = vet1[j];
}

for (i = 0; i < 9; i++) {
	
for (j = 0; j < 9; j++) {

if (vet1[j] < vet1[j+1]) {

temp = vet3[j];
vet3[j] = vet3[j+1];
vet3[j+1] = temp;
}
}		
}

printf ("A ordem decrescente dos numeros eh: ");

for (i = 0; i < 10; i++){
	
	printf (" %d ", vet3[i]);
	
}	

printf ("\n\n");


//Ao quadrado
for (i = 0; i < 10; i++) {
	
	
	vet4[i] = vet1[i];
	vet4[i] = vet4[i] * vet4[i];
	
}
	
printf ("Os numeros elevados ao quadrado sao:  ");

for (i = 0; i < 10; i++) {
	
printf (" %d ", vet4[i]);
	
}	
	
	
	return 0;
}
