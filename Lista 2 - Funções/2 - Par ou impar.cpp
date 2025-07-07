#include <stdio.h>

int compara (int num1) {
	
if (num1 % 2 == 0){
printf ("Seu numero eh par");

}	
	
else {
	printf ("Seu numero eh impar");
}	
	
	
}

int main () {
	int num;
	
	printf ("Digie um numero inteiro: ");
	scanf ("%d", &num);
	
	num = compara (num);
	
	
	return 0;
}
