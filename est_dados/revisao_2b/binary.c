#include <stdio.h>

int binary_search(int *vetor, int n, int elemento) {
	int esq=0, dir=n-1, centro;

	while (esq <= dir) {
		centro = (dir-esq)/2 + esq;
		if (elemento == vetor[centro]) return centro;
		else if (elemento > vetor[centro]) esq = centro+1;
		else dir = centro-1;
	}
	return -1;
}

void bubble_sort(int *vetor, int n) {
	char flag=0;
	int i, aux;

	while (!flag) {
		flag = 1;
		for (i=0;i<n-1;i++) {
			if (vetor[i] > vetor[i+1]) {
				aux = vetor[i+1];
				vetor[i+1] = vetor[i];
				vetor[i] = aux;
				flag = 0;
			}
		}
	}	
}

int main() {
	int vetor[6]={1,-3,5,2,44,6};

	bubble_sort(vetor, 6);
	printf("Vetor ordenado:\n[");
	for (int i=0;i<6;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");

	printf("%d\n", binary_search(vetor, 6, -5));
}