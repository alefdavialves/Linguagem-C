#include <stdio.h>
#define LIM 50

float f1 (float num[LIM]) {

int i;
float soma;

for(i = 0;  i < 10; i++) {
	
soma += num[i];
	
}
	
return soma;	
}




int main () {
	
	char op;
	float num1, num2, resultado;

printf(" ------------------------- \n");
printf("|                         |\n");
printf("|  Minha Calculadora em C |\n");
printf("|                         |\n");
printf(" ------------------------- \n");

printf(" ------------------------------------------------------------\n");
printf("| Selecione uma das operacoes com seus respectivos caracteres |\n");
printf("| + = adicao                                                  |\n");
printf("| - = subtracao                                               |\n");
printf("| * = multiplicacao                                           |\n");
printf("| / = divisao                                                 |\n");
printf("| ^ = ao quadrado                                                 |\n");
printf(" -------------------------------------------------------------\n");

printf("Digite o caracter: \6");
op = getchar ();

if (op == '+'){
	printf ("Selecionado adicao\n\n");}

if (op == '-')
 	printf ("Selecionado subtracao\n\n");

if (op == '*')
	printf ("Selecionado multiplicacao\n\n");
	
if (op == '/')
	printf ("Selecionado divisao\n\n");
	
if (op == '^') {
		
	printf ("Selecionado ao quarado\n\n");
}

printf ("Digite o primeiro numero: ");
scanf ("%f", &num1);

printf ("Digite o segundo numero: ");
scanf ("%f", &num2);

printf("\n");

if (op == '+'){
    printf ("O resultado da soma entre %.1f e %.1f eh igual a %.1f ",num1, num2, (num1 + num2));}
    
else{
if (op == '-') {
  printf ("O resultado da subtracao entre %.1f e %.1f eh igual a %.1f ",num1, num2, (num1 - num2));}

else{
	if (op == '*') {
printf ("O resultado da multiplicacao entre %.1f e %.1f eh igual a %.1f ",num1, num2, (num1 * num2));}

else{
 if (op == '/') {
 printf ("O resultado da divisao entre %.1f e %.1f eh igual a %.1f ",num1, num2, (num1 / num2));}
 
   if (op == '^') {
   	
   }
  
else printf ("Operacao nao reconhecido");
}
}
}


return 0;
}
