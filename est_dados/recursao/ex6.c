#include <stdio.h>


int max_elem_recursivo(int n, int *vetor) {
	if (n == 1) return vetor[0];
	else if (vetor[0] > vetor[1]) vetor[1] = vetor[0];
	return max_elem_recursivo(n-1, vetor+1);
}

int max_elem_iterativo(int n, int *vetor) {
	int max=vetor[0];
	for (int i=0;i<n;i++) {
		if (vetor[i] > max) max = vetor[i];
	}
	return max;
}

int main() {
	int vetor[5]={1,22,3,7,4};

	//printf("%d\n", max_elem_recursivo(5, vetor));

	return 0;
}