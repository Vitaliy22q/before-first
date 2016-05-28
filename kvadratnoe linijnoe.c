#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()

{
	float x, a, b;
	printf("\n\n a * x + b = 0\n");
	printf("\nVvedite a ");
	scanf("%f", &a);
	printf("\nVvedite b ");
	scanf("%f", &b);
	//a * x + b = 0;
	//a * x = -b;
	x = - b / a;	
	printf("\nx = %3.2f\n\n", x);
	return 0;
}
