#include <stdio.h>

int main () {
	
	char nome[20];
	float a1, a2, a3, med, aul, falt, fre;
	
	printf ("Nome do Aluno: ");
	scanf ("%s", &nome);
	
	printf ("\n");
	
	printf ("Selecione a nota da avaliacao 1: ");
	scanf ("%f", &a1);
	
	printf ("Selecione a nota da avaliacao 2: ");
	scanf ("%f", &a2);
	
	printf ("Selecione a nota da avaliacao 3: ");
	scanf ("%f", &a3);
	
	printf ("\n");
	
	printf ("Media minima = 7 \n\n");
	
	printf ("Selecione seu numero de aulas no semestre: ");
	scanf ("%f", &aul);
	
	printf ("Selecione seu numero de faltas no semestre: ");
	scanf ("%f", &falt);
	
	printf ("\n");
		
	fre = (100 - (falt / aul)* 100);
	med = (a1 + a2 + (a3*2))/4;
	
	
if ((med >= 7) && (fre > 75)) {
printf ("O aluno %s ficou com media %1.f, e teve uma frequencia de %1.f%%  nas aulas. Portanto, esta aprovado", nome, med, fre);}
else {
printf ("O aluno %s ficou com media %1.f, e teve uma frequencia de %1.f%%  nas aulas. Portanto, esta reprovado", nome, med, fre);}
	

	
	
	
	
}
