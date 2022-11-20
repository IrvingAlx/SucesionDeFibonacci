#include <stdio.h>

int main(void) {
	int i, x = 0, y = 1, z = 0;
	printf("Fibonacci\n");

	for (i = 0; i <= 50; i++) {
		z = x + y;
		printf("Posicion %d es %d\n", i, z);
		x = y;
		y = z;
	}

	return 0;
}