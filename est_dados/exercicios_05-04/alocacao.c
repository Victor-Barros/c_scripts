#include <stdio.h>
#include <stdlib.h>


int main() {
	float *notas, soma=0; 
	int n;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	notas = (float*)malloc(n*sizeof(float));
	
	printf("Digite as notas: \n");

	for (int i=0;i<n;i++) {
		printf("(%d de %d): ", i+1, n);
		scanf("%f", notas+i);
		soma += notas[i];
	}

	printf("\nMedia aritmetica: %f\n", soma/(float)n);

	free(notas);

	return 0;
}