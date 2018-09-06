#include <stdio.h>
#include <stdlib.h>

void sort_bubble(int*,int);

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
	sort_bubble(vetor,n);

	printf("\nVetor ordenado: [");
	for (int i=0;i<n;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");
	
	free(vetor);
	return 0;
}

void sort_bubble(int *vetor, int tamanho) {
	char flag=1;
	int i, temp;
	while(flag) {
		flag = 0;
		i=0;
		while((i+1) < tamanho) {
			if (vetor[i] > vetor[i+1]) {
				temp = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = temp;
				flag = 1;
			}
			i++;
		}
	}
}
