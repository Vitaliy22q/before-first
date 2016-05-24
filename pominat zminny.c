#include <stdio.h>

int main(void)
{
	int x = 1,y=2,z;
	
	
	
	printf("\nX = %d\nY = %d", x, y);
	
	z = x;
	x = y;
	y = z;
	
	printf("\nX = %d\nY = %d", x, y);
	
	return 0;
}
