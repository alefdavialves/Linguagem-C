#include<stdio.h>
//
struct Aluno
{
char nome[50];
char RA[7];
float teste1;
float teste2;
float teste3;
float faltas;
float media;
float frequencia;
};
//
int main(){
	//
	int i, j;
	float soma1, soma2, soma3, Notas[3][10];;
	struct Aluno temp;
	//
    // Inseri só os valores de nome, RA, teste1, teste2, teste3, faltas até o momento na parte de baixo
	//
	struct Aluno aluno[10] = {
	    {"Alice Lima", "00745", 5.5, 6.6, 4, 8},
	    {"Bruno Souza", "01267", 7.8, 8, 3.5, 12},
		{"Carlos Viana", "00084", 9, 9.5, 8.75, 24},
		{"Danilo Alvim", "00267", 6.5, 3, 2.55, 6},
		{"Emerson Silva", "00107", 5, 4.35, 4, 19},
		{"Fernanda Guedes", "00942", 7.5, 4, 2.5, 0},
		{"Gustavo Amorim", "01103", 7.55, 7, 4, 5},
		{"Hilda Freitas", "01006", 9, 9, 6.75, 7},
		{"Ivo Carvalho", "00351", 5, 5, 5, 6},
	    {"Jorge Garcia", "00433", 4, 3.75, 4.85, 0}   
	};
    //
	//	
	printf("-------------------------------------------------------\n");
	printf("|                 ALGORITMO ACADEMICO                 |\n");
	printf("-------------------------------------------------------\n\n");
	//
	printf("Considere que para a aprovacao na disciplina o aluno precisa obter uma\n"); 
	printf("frequencia igual ou superior a 65%% e media geral maior ou igual a 5,00.\n\n\n");
	//
	printf ("Os alunos que deverao fazer a prova de recuperacao sao\n\n");
	//
	for(i=0; i<10; i++) 
	{
	 aluno[i].media = (((aluno[i].teste1*2)+ (aluno[i].teste2*3) + (aluno[i].teste3*5)) / 10);
	 aluno[i].frequencia = ((1 - (aluno[i].faltas / 32)) * 100); // Em percentual
	// 
	 if (aluno[i].media < 5 && aluno[i].frequencia > 65) 
	 {		
	  printf ("%s, com media final %.2f, mas com %.1f%% de frequencia nas aulas\n", aluno[i].nome, aluno[i].media, aluno[i].frequencia);
     }
    }
    //
    //
    printf ("\n\n");
    printf ("Os alunos aprovados e reprovados em ordem decrescente foram: \n\n");
    //
    for (j=0; j<9; j++)
	{
    for (i=0; i<9; i++)
	{
	 if (aluno[i].media < aluno[i+1].media) 
	 {
	  temp = aluno[i];
	  aluno[i] = aluno[i+1];
	  aluno[i+1] = temp;	
     }
    }
    }
    //
    for ( i = 0; i < 10; i++) 
	{
     if (aluno[i].media >= 5 && aluno[i].frequencia >= 65) 
	 {
     printf ("%s (RA: %s), com media final %.2f e frequencia de %.1f%%, esta APROVADO \n", aluno[i].nome, aluno[i].RA, aluno[i].media, aluno[i].frequencia);
     }
     else 
	 {
     printf ("%s (RA: %s), com media final %.2f e frequencia de %.1f%%, esta REPROVADO \n", aluno[i].nome, aluno[i].RA, aluno[i].media, aluno[i].frequencia);
     }
    }
    //
    //
    printf("\n\n");
	printf("Media geral da turma para cada teste\n\n");
	//
    for(j=0; j<10; j++)
	{
	 Notas[0][j] = aluno[j].teste1;
	 Notas[1][j] = aluno[j].teste2;
	 Notas[2][j] = aluno[j].teste3;
	 soma1 = soma1 + Notas[0][j];
	 soma2 = soma2 + Notas[1][j];
	 soma3 = soma3 + Notas[2][j];
    }
    //
    printf("Media da turma no TESTE 1: %.2f\n", soma1/10);
    printf("Media da turma no TESTE 2: %.2f\n", soma2/10);
    printf("Media da turma no TESTE 3: %.2f\n", soma3/10);
    //
    //
return 0;
}



