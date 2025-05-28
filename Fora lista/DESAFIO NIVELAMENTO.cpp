#include <stdio.h>

float f1 (float fnotaalunos) {
	
float soma;
float fmedia;

soma = soma + fnotaalunos;
fmedia = soma / 10;
return fmedia;
	
	
}

int main () { 

int vetaluno[10] = {74, 111, 12, 65, 67, 143, 3, 99, 55, 101};
float vetnota [10] = {4.5, 8.7, 6.9, 5, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8};
int opcao, i, procuraaluno, j;
float mediaalunos, temp, maior;

do {

printf ("Escolha uma opcao entre 1 e 6 sendo:\n\n");

printf ("1. Media Geral das notas da disciplina\n");
printf ("2. Nota Final de um determinado aluno\n");
printf ("3. Relacao das Notas Finais em ordem decrescente\n");
printf ("4. Aprovacao ou nao de um determinado aluno (>= 5.0 para aprovar)\n");
printf ("5. Qual a maior nota da disciplina e quem a tirou?\n");
printf ("6. Qual a menor nota da disciplina e quem a tirou?\n\n");

printf ("Ao digitar 0 fecha o programa, ao digitar outro numero ele perguntara de novo a mesma pergunta \n\n");

printf ("Digite a opcao desejada: ");
scanf ("%d", &opcao);

printf ("\n");

} while (opcao > 6);

if (opcao == 0) {
	return 0;
}

//Opção 1

if (opcao == 1) {
	for (i = 0; i < 10; i++) {
			mediaalunos = f1 (vetnota[i]);	
}
	printf ("A media de notas de todos os alunos eh: %.2f", mediaalunos);
}

//Opção 2
if (opcao == 2) {
	printf ("Digite a matricula de um determinado aluno: ");
	scanf ("%d", &procuraaluno);
	
	for (i = 0; i < 10; i++) {
		
	if (procuraaluno == vetaluno[i]) {
	
	vetnota[i] == vetaluno[i];
	printf ("Matricula %d, tirou a nota %f", procuraaluno, vetnota[i]);

}
}	
}

//Opção 3

if (opcao == 3) {
	
for (j = 0; j < 10; j++) {

for (i=0; i < 10; i++) {

if (vetnota[i] < vetnota[i + 1]) {


temp = vetnota[i];
vetnota[i] = vetnota [i + 1];
vetnota [i + 1] = temp;
}
}
}
	
printf ("Notas em ordem decrescente: ");

for (i=0; i < 10; i++) {
	
	printf ("%.1f, ", vetnota[i]);

}
}

//Opção 4
if (opcao == 4) {

	printf ("Digite a matricula de um determinado aluno: ");
	scanf ("%d", &procuraaluno);
	
	for (i = 0; i < 10; i++) {
		
	if (procuraaluno == vetaluno[i]) {
	vetnota[i] == vetaluno[i];
	
	if (vetnota[i] >= 5.0) {
		printf ("O aluno %d com a nota %f, foi aprovado", procuraaluno, vetnota[i]);
		
	}
	
	else {
		printf ("o aluno %d com nota %f, foi reprovado", procuraaluno, vetnota[i]);
	}

}
}
}

//Opção 5
if (opcao == 5) {
	
int temp2;

for (j = 0; j < 10; j++) {
for (i=0; i < 10 ; i++) {
	
	
if (vetnota[i] < vetnota[i + 1]) {

temp = vetnota[i];
vetnota[i] = vetnota [i + 1];
vetnota [i + 1] = temp;

temp2 = vetnota[i];
vetaluno[i] = vetaluno [i + 1];
vetaluno [i + 1] = temp2;

}
}
}


printf ("O aluno com a maior nota tem a matricula: %d, e tirou %.2f", vetaluno[0], vetnota[0]);
	
}

//Opção 6

if (opcao == 6) {

int temp2;
	
for (j = 0; j < 9 ; j++) {

for (i=0; i < 9 ; i++) {

if (vetnota[i] > vetnota[i + 1]) {

temp = vetnota[i];
vetnota[i] = vetnota [i + 1];
vetnota [i + 1] = temp;

temp2 = vetnota[i];
vetaluno[i] = vetaluno [i + 1];
vetaluno [i + 1] = temp2;

}
}
}
printf ("O aluno com a maior nota tem a matricula: %d, e tirou %.2f", vetaluno[0], vetnota[0]);		
}
}

