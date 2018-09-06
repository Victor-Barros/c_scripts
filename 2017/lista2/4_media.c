#include <stdio.h>

int main(void) {

	double numero=1;
	double soma=0;
	double media;
	int positivos=0;
	int negativos=0;
	int cont=0;

	printf("Digite numeros individualmente (0 para parar):\n");

	while (numero != 0) {
		printf(">");
		scanf("%lf", &numero);

		if (numero) {
			if(numero > 0) {
				positivos++;
			} else {
				negativos++;
			}
			
			soma += numero;
			cont++;
		}
	}

	media = soma/cont;

	printf("%d sao positivos(%g%%), %d sao negativos(%g%%). \nA media eh %g\n", positivos, (double)100*positivos/(positivos+negativos), negativos, 100*(double)negativos/(positivos+negativos), media);
	return 0;
}