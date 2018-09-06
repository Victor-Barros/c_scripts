#include <stdio.h>
#include <stdlib.h>


int *cria_vetor(int);
void imprime_vetor(int*,int);
void libera_vetor(int*);

int main() {
	int n, *vetor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	vetor=cria_vetor(n);

	printf("Digite os elementos do vetor (tamanho %d):\n", n);
	for (int i=0;i<n;i++) {
		printf("[%d]: ", i);
		scanf("%d", vetor+i);
	}

	imprime_vetor(vetor,n);
	libera_vetor(vetor);

	return 0;
}

int *cria_vetor(int n) {
	int *vetor = (int*)calloc(n,sizeof(int));
	return vetor;
}

void imprime_vetor(int *vetor, int n) {
	printf("\nVetor: [");
	for (int i=0;i<n;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");
}

void libera_vetor(int *vetor) {
	free(vetor);
}