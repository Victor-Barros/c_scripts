#include <stdio.h>
#include <stdlib.h>

void ler(int*, int);

int main() {
	int n, *vetor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	vetor = (int*)malloc(n*sizeof(int));

	ler(vetor, n);

	printf("\nVetor: [");
	for (int i=0;i<n;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");


	free(vetor);
	return 0;
}

void ler(int *vetor, int n) {
	printf("Digite os elementos inteiros de um vetor:\n");
	for (int i=0;i<n;i++) {
		printf("[%d]: ", i);
		scanf("%d", vetor+i);
	}
}