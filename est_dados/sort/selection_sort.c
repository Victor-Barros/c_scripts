#include <stdio.h>
#include <stdlib.h>

void sort_vetor(int*,int);

int main() {

	int *vetor, n;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	vetor = (int*)calloc(n,sizeof(int));

	printf("Digite os elementos do vetor:\n");
	for (int i=0;i<n;i++) {
		printf("[%d]: ", i);
		scanf("%d", vetor+i);
	}
	sort_vetor(vetor,n);

	printf("\nVetor ordenado: [");
	for (int i=0;i<n;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");

	free(vetor);
	return 0;
}

void sort_vetor(int *vetor, int tamanho) {
	int min, min_id, i, j;
	for (i=0;i<tamanho-1;i++) {
		min_id=i;
		min=vetor[min_id];
		for (j=i;j<tamanho;j++) {
			if (vetor[j] < min) {min=vetor[j]; min_id=j;}
		}
		vetor[min_id]=vetor[i];
		vetor[i]=min;
	}
}
