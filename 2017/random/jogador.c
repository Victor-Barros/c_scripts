#include <stdio.h>

int main(void) {
	double idade;
	double altura;

	printf("Digite a idade do jogador\n>");
	scanf("%lf", &idade);
	
	printf("Digite a altura do jogador\n>");
	scanf("%lf", &altura);

	if (idade > 18 && altura > 1.9) {
		printf("Fora da categoria A\n");
	} else {
		printf("Dentro da categoria A\n");
	}
	return 0;
}