#include <stdio.h>
#include <stdlib.h>
#define tam 100

int main () {
	
int vet1[tam];
int i, j, contador, temp;


printf ("Digite 100 numeros inteiros:\n\n ");
	
for (i = 0; i < 100; i++) {
	
		contador = i + 1;
		
	printf ("Numero %d: ", contador);
	scanf ("%d", &vet1[i]);
	
if (vet1[i] == 0) {
	
	break;
}
}
	 

printf ("Foram digitados %d numeros ate o 0 \n\n", contador - 1);

printf ("Os numeros na ordem inversa eh: ");

for (i = contador - 1; i >=0 ; i--) {
	
	printf (" %d ", vet1[i]);
}

printf ("\n\n");
	
for (i = contador - 1; i > 0 ; i++) {
	
for (j = 0; j < i ; j++){

if (vet1[j] > vet1[j + 1]) {
	
temp = vet1[j];
vet1[j] = vet1[j + 1];
vet1[j + 1] = temp;
	
}
}
}

printf ("O maior numero eh: %d \n", vet1[0]);
printf ("O segundo maior numero eh: %d \n", vet1[1]);	
	
	

return 0;	
}
