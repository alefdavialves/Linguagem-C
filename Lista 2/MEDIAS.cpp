#include <stdio.h>

float f1 (float n1, float n2, float n3) {
	
	float media;
	media = (n1 + n2 + n3) / 3;
	return media;	
}

float f2 (float n1, float n2, float n3) {
	
	float ponderada;
	ponderada = (((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10);
	return ponderada;
}


int main () {

float nota1, nota2, nota3, meda, medp;
int continuar;
char letra, S;

continuar = 1;

printf ("Digite a primeira nota: ");
scanf ("%f", &nota1);

printf ("Digite a segunda nota: ");
scanf ("%f", &nota2);

printf ("Digite a terceira nota: ");
scanf ("%f", &nota3);


printf ("\n\n");

while (continuar) {

printf ("Media Aritmetica (A) ou Media Ponderada (P) ou (S) para sair: ");
scanf (" %c", &letra);

if (letra == 'A') {
	
	meda = f1 (nota1, nota2, nota3);
	
	printf ("A media aritmetica da sua nota  eh: %f", meda);
	printf ("\n\n");
}

else {


if (letra == 'P') {
	
	medp = f2 (nota1, nota2, nota3);
	
	printf ("A media ponderada da sua nota eh: %f", medp);
		printf ("\n\n");
}


else {
	
if (letra == 'S') {
continuar = 0;
}
	

else {
	printf ("%c nao eh uma operacao valida", letra);
printf ("\n\n");

}
}
}

printf ("\n\n");

}
return 0;
}

