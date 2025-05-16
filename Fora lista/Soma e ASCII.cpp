#include <stdio.h>
#include <stdlib.h>

int main(){
	
int x, y;
float z;
char c;

printf("Digite um numero inteiro: " );
scanf("%d", &x);

printf("Digite um numero inteiro: " );
scanf("%d", &y);

printf("Digite um numero decimal: " );
scanf("%f", &z);

printf("x = %d e y = %d e z = %z \n \n", x, y, z);

printf ("E a soma de x e y eh = %d \n \n", (x + y));

printf ("E a soma de x e z eh = %f \n \n", (x + z));



printf("Entre com  o Caracter: %c ", c);
scanf("%c", &c);
c = getchar();
printf("Codigo ASCII: %d \n", c);

return 0;

	
}
