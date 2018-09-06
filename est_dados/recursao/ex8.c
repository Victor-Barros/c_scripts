#include <stdio.h>


int soma_recursivo(int n, int *vetor) {
	if (vetor[0] < 0) vetor[0] = 0;
	if (n == 1) return vetor[0];
	else return vetor[0]+soma_recursivo(n-1, vetor+1);
}

int soma_iterativo(int n, int *vetor) {
	int soma=0;
	while(n>0) {
		if (vetor[n-1] > 0) soma+=vetor[n-1];
		n--;
	}
	return soma;
}

int main() {
	int vetor[5]={2,-2,-2,2,2};

	printf("%d\n", soma_recursivo(5, vetor));

	return 0;
}