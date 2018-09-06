#include <stdio.h>

int main(void) {

	double numero = 0;

	printf("Digite um numero\n>");
	scanf("%lf", &numero);

	if (numero > 20) {
		printf("%g\n", numero/2);
	}else{
		printf("%g\n", numero);
	}
	return 0;
}