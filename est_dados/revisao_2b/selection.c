#include <stdio.h>

void selection_sort(int *vetor, int n) {
	int min, min_id, i, j, aux;
	for (i=0;i<n;i++) {
		min=vetor[i], min_id=i;
		for (j=i;j<n;j++) {
			if (vetor[j] < min) {
				min = vetor[j];
				min_id = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[min_id];
		vetor[min_id] = aux;
	}
}

int main() {
	int vetor[6]={1,-3,5,2,44,6};

	selection_sort(vetor, 6);
	printf("Vetor ordenado:\n[");
	for (int i=0;i<6;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");
}