#include <stdio.h>

int main(void) {

	int dentro=0;
	int fora=0;
	double numero;

	for(int i=0;i<10;i++) {
		printf("Digite um Nº:\n>");
		scanf("%lf", &numero);

		if(numero < 10 || numero > 20) {
			fora++;
		} else {
			dentro++;
		}
	}

	printf("%d estao fora e %d estao dentro.\n", fora, dentro);
	return 0;
}
