#include <stdio.h>
#include <math.h>

int main(void) {
	int escolha;
	double medida;
	double medida2;

	printf("Menu: Calcular a area\n1 -- Circulo\n2 -- Quadrado\n3 -- Triangulo\n>");
	scanf("%d", &escolha);

	switch(escolha) {
		case 1: {
			printf("Digite o raio\n>");
			scanf("%lf", &medida);
			printf("A area eh %g\n", medida*2*M_PI);
			break;
		}
		case 2: {
			printf("Digite o lado\n>");
			scanf("%lf", &medida);
			printf("A area eh %g\n", medida*medida);
			break;
		}
		case 3: {
			printf("Digite a base\n>");
			scanf("%lf", &medida);
			printf("Digite a altura\n>");
			scanf("%lf", &medida2);
			printf("A area eh %g\n", (medida*medida2)/2);
			break;
		}
		default: printf("Erro!\n"); break;
	}	
	return 0;
}