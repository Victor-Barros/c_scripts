#include <stdio.h>

#define TAM 8

int busca_sequencial(int, int*, int); 
int busca_ord(int, int*, int);

int main() {
	int vetor[TAM]={4,3,5,2,45,3,5,65}, index, busca;
	int vetor_ord[TAM]={1,2,3,4,5,6,7,8};

	printf("Digite o elemento a ser buscado: ");
	scanf("%d", &busca);

	//index = busca_sequencial(TAM, vetor, busca);
	index = busca_ord(TAM, vetor_ord, busca);

	if (index >= 0) printf("Indice encontrado: %d\n", index);
	else printf("Nao encontrado\n");

	return 0;
}

int busca_sequencial(int n, int *vetor, int elemento) { //torna indice do elemento
	while (--n > 0) {
		if (vetor[n] == elemento) return n;
	}
	return -1; //caso nao encontre
}

int busca_ord(int n, int *vetor, int elemento) {
	int i=0;
	if (vetor[n-1] < elemento) return -1; //impedir loop infinito
	while(1) {
		if (vetor[i++] >= elemento) break;
	}
	if (vetor[--i] == elemento) return i;
	else return -1;
}