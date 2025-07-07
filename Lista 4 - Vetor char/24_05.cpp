#include <stdio.h>
#define LIM 200

int main () { 

char frase[LIM];
char palavra [50];
int contfrase, contpalavra, achoupalavra, tampalavra;
int i, temp;

contfrase = 0;
contpalavra = 0;
achoupalavra = 0;
tampalavra = 0;


printf ("Digite uma frase ate 200 letras: \n");
fgets (frase, LIM, stdin);

for (i = 0; i < LIM; i++){
	
	if (frase[i] != ' ' && frase[i] != '\n') {
		
	if (achoupalavra == 0) {
	
	palavra[contpalavra] = frase[contfrase];
		
	contfrase++;
	contpalavra++;
	tampalavra++;

	achoupalavra = 1;
	
}
else {
	
	if (contfrase == '\n') {
		break;
		
}
}
}
}

for (i = 0; i < LIM; i++) {
	temp = palavra[i];	
      palavra[i] = palavra[tampalavra-1-i];
      palavra[tampalavra-1-i] = temp;
	
}

int tam = tam/2;

for (i = 0; i < tam; i++)
{
	frase[i] = palavra [i];
			}



}
