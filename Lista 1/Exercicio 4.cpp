#include <stdio.h>

int main () {
	
	int num, n1;
	
	printf ("Os numeros divisiveis por 4 ate 100 sao:\n ");
	
	for (n1 = 1; n1 <= 100; n1++) {
		
if (n1 % 4 == 0) {
	
printf ("%d ", n1);

}
}
printf("\n \n");
	
printf ("Agora digite outro numero: ");

scanf ("%d", &num);

printf ("\n");
		
printf ("Os numeros divisiveis por %d ate 100 sao:\n", n1)	;	
		

for (n1 = 1; n1 <= 100; n1++) {
		
if (n1 % num == 0) {
	
printf ("%d ", n1);

}
}
	
	return 0; 
		
}

