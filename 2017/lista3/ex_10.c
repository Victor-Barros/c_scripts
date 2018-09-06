#include <stdio.h>

#define SIZE 10 //Ajustar para mais elementos

int main(void) {
	int numeros[SIZE];
	int teste_max, max_pos;

	printf("Digite %d inteiros: \n", SIZE);
	for(int i=0;i<SIZE;i++) {
		printf(">");
		scanf("%d", &numeros[i]);
	}

	teste_max = numeros[0];
	max_pos = 0;

	for(int i=0;i<SIZE;i++) {
		if (numeros[i] > teste_max) {
			teste_max = numeros[i];
			max_pos = i;
		}
	}

	printf("Maior numero: indice %d e valor %d\n", max_pos, teste_max);
	return 0;
}