#include <stdio.h>

int main () {
	
	int x, y;
	x = 10;
	y = x++;
	
	printf("%d \n", x); //11
	printf("%d \n", y); //10
	
	y = ++x;
	printf("%d \n", x);
	printf("%d \n", y);
	
}
