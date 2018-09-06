#include <stdio.h>

#define n 10

int main() {
	double valor, soma=0, quantidade=0;

	for (int i=0;i<n;i++) {
		printf("Digite um valor real:\n");
		scanf("%lf", &valor);

		if (valor > 4) {
			quantidade++;
			soma += valor;
		}
	}

	if (quantidade > 0) {
		printf("Media dos valores maiores que 4: %g\n", soma/quantidade);
	} else printf("Nenhum valor maior que 4.\n");

	return 0;
}