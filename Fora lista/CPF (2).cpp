#include <stdio.h>

//Função primeiro digito
int f1 (int num1, int num2, int num3, int num4, int num5, int num6, int num7, int num8, int num9, int num10, int num11) {

//Declaração das variáveis da função
int mult1, mult2, mult3, mult4, mult5, mult6, mult7, mult8, mult9, soma1, resto1, d1; ;

//Multiplicação dos digitos
mult1 = num9 * 2;
mult2 = num8 * 3;
mult3 = num7 * 4;
mult4 = num6 * 5;
mult5 = num5 * 6;
mult6 = num4 * 7;
mult7 = num3 * 8;
mult8 = num2 * 9;
mult9 = num1 * 10;

//Soma das multiplicações
soma1 = mult1 + mult2 + mult3 + mult4 + mult5 + mult6 + mult7 + mult8 + mult9;

//Resto da soma / 11
resto1 = (soma1 % 11);

//Condição 1
if (resto1 < 2) {
	d1 = 0;
}

//Condição 2
else {
	d1 = (11 - resto1);	
}

//Retorno da função
return d1;
}

//Função segundo digito
int f2 (int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11){
	
//Declaração das variáveis da função
int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, resto2, d2, soma2;

//Multiplicação dos digitos
m1 = n10 * 2;
m2 = n9 * 3;
m3 = n8 * 4;
m4 = n7 * 5;
m5 = n6 * 6;
m6 = n5 * 7;
m7 = n4 * 8;
m8 = n3 * 9;
m9 = n2 * 10;
m10 = n1 * 11;

//Soma das multiplicações
soma2 = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10;

//Resto da soma / 11
resto2 = (soma2 % 11);

//Condição 1
if (resto2 < 2) {
	d2 = 0;	
}

//Condição 2
else {
	d2 = (11 - resto2);	
}

return d2;
}


int main (){

//Declaração das variáveis
int n1, n2, n3, n4, n5, n6, n7, n8, n9;
int digito1, digito2;
int i, n;


printf ("Verificador de CPF\n");
printf ("Digite os primeiros 9 digitos do seu CPF 1 (1 por 1)\n\n");

//Obtenção dos digitos 

for (i = 1; i  <= 9; i ++) {
	
printf ("Digito: ");
scanf ("%d", &n);
	
	switch (i) {
		
		case 1: n1 = n; break;
		case 2: n2 = n; break;
		case 3: n3 = n; break;
		case 4: n4 = n; break;
		case 5: n5 = n; break;
		case 6: n6 = n; break;
		case 7: n7 = n; break;
		case 8: n8 = n; break;
		case 9: n9 = n; break;
			
	}
}

//Atribuição das funções
digito1 = f1 (n1, n2, n3, n4, n5, n6, n7, n8, n9, digito1, digito2);
digito2 = f2 (n1, n2, n3, n4, n5, n6, n7, n8, n9, digito1, digito2);
	
printf ("\n\n");

//Resultado
printf ("Seu CPF completo eh: %d%d%d . %d%d%d . %d%d%d - %d%d", n1, n2, n3, n4, n5, n6, n7, n8, n9, digito1, digito2);

printf ("\n\n");
	

return 0;}
