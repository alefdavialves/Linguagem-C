#include <stdio.h>

int main () {
	
int numero [10], i;
int temporario;
	
printf ("Digite 10 numeros\n");
	
	
for (i = 0; i < 10; i++) {
		
	printf ("Numer %d: ", i+1);
	scanf ("%d", &numero [i]);
	}
	
	int c[10];
	
	for (i = 0; i < 10; i++) {
		
	c[10-1-i] = numero[i];
		
		
	}
	
	printf ("\n");
for (i = 0; i < 10; i++) {
	

	printf ("%d ", c[i]);	
}

}
