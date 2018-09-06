#include <stdio.h>

int main(void) {
	int n_inicial, n_final;

	printf("Digite o Nº inicial: \n>");
	scanf("%d", &n_inicial);

	printf("Digite o Nº final: \n>");
	scanf("%d", &n_final);

	while (n_inicial <= n_final) {
		printf("%d\n", n_inicial);
		n_inicial++;
	}
	return 0;
}