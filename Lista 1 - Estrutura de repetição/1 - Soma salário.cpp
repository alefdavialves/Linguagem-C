#include <stdio.h>

int main () {
	
	
float s1, aumento;
int ano, anoatual;

s1 = 1000.00;
anoatual = 2017;
aumento = 0.015;
	
	
printf ("Salario do Funcionario a partir de 2017\n");

printf ("Digite um ano: ");

scanf ("%d", &ano);
	
if (ano == 2017) {
	
	printf ("O salario no ano %d ano eh %.2f", ano, s1);
}

if (ano > 2017) {

while (ano > anoatual) {

s1 += s1 * aumento;

aumento *= 2;

anoatual++;

}

printf ("O salario em %d sera de %.2f", ano, s1);

}

if (ano < 2017) {
	printf ("Digite um ano equivalente");
	
}

	return 0;
}
