#include <stdio.h>
#define tam 10

int main () {

int vet1 [tam];
int i, j, temp;

for (i = 0; i < 10; i++) {
	
	
	printf ("Digite numero %d: ", (i+1));
	scanf ("%d", &vet1[i]);
	
}
	
for (i = 0; i < 9; i++) {
	
for (j = 0; j < 9; j++) {
	
if (vet1[j] > vet1 [j+1]) {
	
temp = vet1[j];
vet1[j] = vet1[j + 1];
vet1 [j + 1] = temp;
	
}	
}			
}
	
printf ("A ordem dos numeros em ordem crescente eh ");
	
for (i = 0; i < 10; i++) {
	printf ("%d ", vet1[i]);
	
}
	
return 0;	
}
