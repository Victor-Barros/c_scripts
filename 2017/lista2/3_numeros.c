#include <stdio.h>

int main(void) {

	int numero=1;
	int positivos=0;
	int negativos=0;

	printf("Digite numeros individualmente (0 para parar):\n");

	while (numero != 0) {
		printf(">");
		scanf("%d", &numero);

		if(numero > 0) {
			positivos++;
		} else if(numero < 0) {
			negativos++;
		}
	}

	printf("%d sao positivos e %d sao negativos.\n", positivos, negativos);
	return 0;
}