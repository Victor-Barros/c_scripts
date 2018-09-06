#include <stdio.h>

int main(void) {

	int numero;
	double soma=0;

	printf("Digite um Nº:\n>");
	scanf("%d", &numero);

	for(int i=1;i<=numero;i++) {
		soma += (double)1/i;
	}

	printf("%g\n", soma);
	return 0;
}