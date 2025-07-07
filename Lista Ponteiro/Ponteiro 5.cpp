#include <stdio.h>
	
void troca (int *a, int *b)	{
	
int temp;
	
temp = *a;
*a = b*;
*b = temp;	
}
	
int main () {	
	
int n1, n2;	

n1 = 25;
n2 = 50;

troca (&n1, &n2);
	
printf ("%d %d -> ", n1, n2);	
	

	return 0;
}
