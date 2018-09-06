#include <stdio.h>

int main(void) {
	double idade;

	printf("Digite sua idade\n>");
	scanf("%lf", &idade);

	if (idade < 16) {
		printf("Nao eleitor\n");
	} else if (idade >= 18 && idade < 65) {
		printf("Eleitor obrigatorio\n");
	} else {
		printf("Eleitor facultativo\n");
	}
	return 0;
}