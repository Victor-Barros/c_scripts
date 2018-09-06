#include <stdio.h>
#include <math.h>

int main(void) {
	double notas[3];
	double pesos[3];
	double somatorios[2];

	for(int i=0;i<3;i++) {
		printf("Digite a nota %d:\n>",i+1);
		scanf("%lf", &notas[i]);

		printf("Digite o peso %d:\n>",i+1);
		scanf("%lf", &pesos[i]);
	}

	for (int i=0;i<3;i++) {
		somatorios[0] += pesos[i]*notas[i];
		somatorios[1] += pesos[i];
	}

	printf("\nMedia: %g \n", somatorios[0]/somatorios[1]);
	return 0;
}