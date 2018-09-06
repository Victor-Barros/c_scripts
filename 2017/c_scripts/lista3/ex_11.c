#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 //Ajustar para mais elementos

int main(void) {
	int numeros[SIZE];
	int teste_dif;

	printf("Digite %d inteiros: \n", SIZE);
	for(int i=0;i<SIZE;i++) {
		printf(">");
		scanf("%d", &numeros[i]);
	}

	teste_dif = abs(numeros[0]-numeros[1]);

	for(int i=0;i<SIZE-1;i++) {
		if (abs(numeros[i]-numeros[i+1]) > teste_dif) {
			teste_dif = abs(numeros[i]-numeros[i+1]);
		}
	}

	printf("Maior diferenca: %d\n", teste_dif);
	return 0;
}