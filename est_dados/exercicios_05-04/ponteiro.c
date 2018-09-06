#include <stdio.h>

#define N 5

void mm(int*, int*, int*);

int main() {
	int vetor[N], min, max;

	printf("Digite %d numeros inteiros:\n", N);
	for (int i=0;i<N;i++) {
		printf(">");
		scanf("%d", vetor+i);
	}

	mm(vetor, &min, &max);

	printf("\nValor minimo: %d \nValor maximo: %d\n", min, max);

	return 0;
}

void mm(int *vetor, int *min, int *max) {
	*min = vetor[0];
	*max = vetor[0];
	
	for (int i=0;i<N;i++) {
		if (vetor[i] < *min) *min = vetor[i];
		if (vetor[i] > *max) *max = vetor[i];
	}
}