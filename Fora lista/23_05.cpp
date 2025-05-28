#include <stdio.h>
#define LIM 10

int main () {

char alfabeto[54] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

char nome1[LIM];
char nome2[LIM];
char nome3[LIM];

char* tempNome;
int c1, c2, c3, c4, c5;
int i, j,  temp;

printf ("Digite 3 nomes separados por espaco\n\n");

scanf ("%s", nome1);
scanf ("%s", nome2);
scanf ("%s", nome3);


c1 = 0;
c2 = 0;
c3 = 0;


for (i=0; alfabeto[i] != '\0'; i++){
	

if (nome1[0] == alfabeto[i] ) {
	
	c1 = i+1;
}

if (nome2[0] == alfabeto[i]) {
	
	c2 = i+1;
}

if (nome3[0] == alfabeto[i]) {
	
	c3 = i+1;
}

}

int codigos[3] = {c1, c2, c3};
char* nomes [3] = {nome1, nome2, nome3};

for (j = 0; j < 2; j++ ) {
for (i = 0; i < 2; i++) {
	
	if (codigos[i] > codigos[i+1]) {
	
	temp = codigos[i];
	codigos[i] = codigos[i+1];
	codigos[i+1] = temp;
	
	tempNome = nomes[i];
    nomes[i] = nomes[i+1];
    nomes[i+1] = tempNome;
		
}
}
}

for (i = 0; i < 3; i++) {
	printf ("%s ", nomes[i]);	
	
}

return 0;
}
