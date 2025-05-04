#include <stdio.h>




int main () {
	
	int numero [10], i;
	
	printf ("Digite 10 numeros\n");
	
for (i = 0; i < 10; i++) {
		
printf ("Numer %d: ", i+1);

scanf ("%d", &numero [i]);

	}
	
	
	int compara;
	compara = numero[0];
	
for (i = 1; i < 10; i++) {
	
if (numero[i] > compara) {
	
compara = numero[i];
	
}
}
	printf ("O maior numero eh o %d", compara);
	
}
	


	
	
	
	

