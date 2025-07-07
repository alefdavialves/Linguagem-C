#include <stdio.h>
#define PI 3.14

float f (float r) {

	
	float area;
	area = PI * r * r;
	return area;
	
}




int main () {
	
	float raio, areadocirculo;
	
	printf ("Digite o raio do circulo em cm: ");
	scanf ("%f", &raio);
	
	areadocirculo = f (raio);
	
	printf ("A area do raio em cm eh: %.1f", areadocirculo);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
