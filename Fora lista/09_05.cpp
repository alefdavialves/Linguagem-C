#include <stdio.h>
#define tam2 5
#define tam 10

int main () {
	
	int vetor1[tam2];
	int vetor2[tam2];
	int vetor3[tam];
	
int i, j, k, n1, n2, n3;

printf ("Digite os n1: ");

for (i = 0; i < tam2; i++)  {
		
scanf ("%d ", &vetor1[i]);
}

printf ("Digite os n2:");	

for (i = 0; i < tam2; i++) {
	
	scanf ("%d", &vetor2[i]);
}


for (k = 0; k < tam; k++) {
	
	if (i > tam2) {
		
	vetor3 [k] = vetor2 [j];
	j++;
	}
	
else {

if (k > n1) {
	vetor3[k] = vetor2[i];
	i++;
	
}


	
	
}	


for (i = 0; i < tam; i++){

printf ("%d ", vetor3[k]);
}
	
	
}





return 0;
}	
		
		
		
				




