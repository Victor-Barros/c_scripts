#include <stdio.h>

int main(void) {
	double numero;

	printf("Digite um numero entre 0 e 1\n>");
	scanf("%lf", &numero);

	if (numero >= 0 && numero < .25) {
		printf("Intervalo 1\n");
	} else if (numero >= .25 && numero < .5) {
		printf("Intervalo 2\n");
	} else if (numero >= .5 && numero < .75) {
		printf("Intervalo 3\n");
	} else if (numero >= .75 && numero <= 1) {
		printf("Intervalo 4\n");
	}
	return 0;
}