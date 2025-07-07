#include <stdio.h>

int main () {
	
	int num, cont, fat, pri;
	fat, pri, cont = 1;
	
	printf ("Digite um numero entre 1 e 50: ");
	scanf ("%d", &num);
	
	printf ("O fatorial do numero %d eh igua a: ", num);
	
	for (cont = 1; cont <= 50; cont++) {
		
fat = fat * cont;
	
 printf ("%d", fat);
		
	}
	
	
return 0;
}
