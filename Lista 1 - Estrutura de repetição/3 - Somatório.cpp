#include <stdio.h>

int main () {
	
	int num1, n0, soma, enter;
	
	printf ("Digite um numero ate 50: ");
	scanf ("%d", &num1);
	
	 n0 = 0;
	 soma = 0;
	 
	while (n0 < num1) {
	
	n0++;
	soma += n0;
}
	
printf ("A soma de todos os numeros antes do seu eh: %d", soma);	
	
return 0;	
}
