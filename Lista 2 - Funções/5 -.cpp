#include <stdio.h>

int main () {
float n1, n2, n3, n4, n5;
float soma, media, c;


printf ("Digite 5 numeros");

printf ("\n");

printf ("Digite o primeiro numero: ");
scanf ("%f", &n1);

printf ("Digite o segundo numero: ");
scanf ("%f", &n2);

printf ("Digite o terceiro numero: ");
scanf ("%f", &n3);

printf ("Digite o quarto numero: ");
scanf ("%f", &n4);

printf ("Digite o quinto numero: ");
scanf ("%f", &n5);

printf ("\n");

soma = (n1 + n2 + n3 + n4 + n5);
printf ("A soma entre esse numeros eh %.1f", soma);

printf ("\n");

media = (soma / 5);
printf ("A media entre esse numeros eh %.1f", media);

printf ("\n");

c = n1;
while (c < n1)

if (c > n2)	{
	c = n3;
}
	
	

}









/*Faça um programa que receba 5 (cinco) números, entre 0 e 100. A partir
desses números, calcule e mostre:
a. A soma dos números digitados;
b. A média dos números digitados;
c. O maior número digitado;
d. O menor número digitado;
e. A média dos números pares;
f. A percentagem dos números pares entre os números digitados*/
