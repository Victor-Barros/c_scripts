#include <stdio.h>
#include <stdlib.h>

#define TAM 17

int busca_binaria(int, int*, int);

int main() {
	int vetor_ord[TAM]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17}, index, busca;

	printf("Digite o elemento a ser buscado: ");
	scanf("%d", &busca);

	index = busca_binaria(TAM, vetor_ord, busca);

	if (index >= 0) printf("Indice encontrado: %d\n", index);
	else printf("Nao encontrado\n");
	
	return 0;
}

int busca_binaria(int n, int *vetor, int elemento) {
	int esq=0, dir=n-1, i;

	while(esq <= dir) {
		i=(esq+dir)/2; //ocorre truncamento
		if (vetor[i] > elemento) dir=i-1;
		else if (vetor[i] < elemento) esq=i+1;
		else return i;
	}
	return -1; //nao encontrado
}