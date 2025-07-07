#include <stdio.h>
#define tam 30

int main () {

float vet1[tam] = {
	
   0.00, 7.34, 3.55, 0.00, 12.89, 0.00, 5.67, 8.23, 0.00, 19.44,
    0.00, 23.18, 6.79, 0.00, 14.33, 0.00, 11.22, 9.90, 0.00, 2.87,
    18.41, 0.00, 4.63, 0.00, 21.56, 13.72, 0.00, 17.45, 1.11, 10.78
};

int i, j;
float soma, temp;
soma = 0;

for (i = 0; i < tam; i++){
	
	soma = soma + vet1 [i];

}

printf ("A soma dos gastos no mes eh %.2f \n\n", soma);

for (i = 0; i < 30; i++) {
		
for (j = 0; j < 30; j++) {
	
if (vet1[j] > vet1[j+1]) {

temp = vet1[j];
vet1[j] = vet1[j+1];
vet1[j+1] = temp;

}
}
}

printf ("O maior valor gasto no mes eh: %.1f, e foi gasto no dia %d", vet1[30], i+1);

for (i = 0; i < 30; i++) {
	
	if (vet1[i] == vet1[30]) {
		
	printf (" %d ", i+1);	
	}
}













return 0;
}
