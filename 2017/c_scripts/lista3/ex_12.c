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
		for(int j=0;j<SIZE-1;j++) {
			if (abs(numeros[i]-numeros[j]) > teste_dif) {
				teste_dif = abs(numeros[i]-numeros[j]);
			}
		}
	}

	printf("Maior diferenca: %d\n", teste_dif);
	return 0;
}