#include <stdio.h>
#include <stdlib.h>

int *vetor, fim=-1, n;


void inserir() {
	if (fim+2 > n) {
		printf("\nA pilha esta cheia...\n");
	} else {
		fim++;
		printf("\nDigite o elemento a ser inserido na pila: ");
		scanf("%d", vetor+fim);
	}
}

void remover() {
	if (fim<0) {
		printf("\nImpossível remover, a pilha esta vazia...\n");
	} else {
		printf("\nO elemento %d foi removido.\n", vetor[fim]);
		fim--;
	}
}

int main() {
	int in=0;

	printf("Digite o nro de elementos do vetor:");
	scanf("%d", &n);

	vetor = (int*)calloc(n, sizeof(int));

	while (in != -1) {
		printf("\n[MENU] Digite 1 para inserir, 0 para remover e -1 para sair.\n>");
		scanf("%d", &in);
		switch(in) {
			case 0 : remover(); break;
			case 1 : inserir(); break;
			case -1 : printf("Encerrado.\n"); break;
			default : printf("Invalido!\n"); break;
		}

		printf("\nEstado da pilha:\n[");
		for (int i=0;i<fim+1;i++) {
			printf(" %d ", vetor[i]);
		}
		printf("]\n");
	}

	return 0;
}