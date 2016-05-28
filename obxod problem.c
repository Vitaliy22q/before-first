#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()

{
	float x, y;
	printf("\nVvedite \"X\"\n\n");
	scanf("%f", &x);
	y = x * x;
	printf ("\nx=%3.1f\ty=%3.1f\n\n", x,y);
	return 0;	
}
