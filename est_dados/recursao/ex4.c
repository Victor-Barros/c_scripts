#include <stdio.h>

long int potencia(int base, int expoente) {
	if (expoente == 0) return 1;
	else return base*potencia(base, expoente-1);
}

int main() {

	//printf("%ld\n", potencia(3,3));
	return 0;
}