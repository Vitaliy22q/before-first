#include <stdio.h>

//using namespace std;
// for windows devcpp

int main()
{
	float x,y;
	printf("x=");
	scanf("%f", &x);
	y = x * x;
	printf("x\ty\n%3.2f\t%3.2f\n", x,y);
	//system("pause"); // for windows only
	return 0;
};


