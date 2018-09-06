#include <stdio.h>

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
}