#include <stdio.h>
#include <stdlib.h>

int *vetor, inicio=0, fim=0, n;


void inserir() {
	if (fim+1 > n) {
		printf("\nA fila esta cheia...\n");
	} else {
		printf("\nDigite o elemento a ser inserido na fila: ");
		scanf("%d", vetor+fim);
		fim++;
	}
}

void remover() {
	if (inicio == fim) {
		printf("\nImpossível remover, a fila esta vazia...\n");
	} else {
		printf("\nO elemento %d foi removido.\n", vetor[inicio]);
		inicio++;
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
		if (inicio == fim) {
			inicio = 0;
			fim = 0;
		}	

		printf("\nEstado da fila:\n[");
		for (int i=inicio;i<fim;i++) {
			printf(" %d ", vetor[i]);
		}
		printf("]\n");
	}

	return 0;
}