#include <stdio.h> 

#define TAM 5

int vetor[TAM];
char buffer[256];

void ler();
int maior();
float media();
void troca(int, int);

int main() {
	int maior_index;

	ler();
	maior_index = maior();
	printf("Maior elemento: %d[%d]\n", vetor[maior_index], maior_index);
	printf("Media aritmetica dos elementos: %f\n", media());
	
	printf("Vetor sem alteracao:\n[ ");
	for (int i=0;i<TAM;i++) {
		printf("%d ", vetor[i]);
	}
	printf("]\n");

	troca(2,1);

	printf("Vetor com alteracao: (2 para 1)\n[");
	for (int i=0;i<TAM;i++) {
		printf("%d ", vetor[i]);
	}
	printf("]\n");
	return 0;
}

void ler() {
	printf("Digite os elementos do vetor:\n");
	for (int i=0;i<TAM;i++) {
		printf("[%d]: ", i);
		if(fgets(buffer, 255, stdin)) sscanf(buffer, "%d", vetor+i);
	}
	printf("\n");
}

int maior() {
	int max=vetor[0], max_index=0;
	for(int i=0;i<TAM;i++) {
		if (vetor[i] > max) max_index = i;
	}
	return max_index;
}

float media() {
	int soma;
	for (int i=0;i<TAM;i++) {
		soma += vetor[i];
	}
	return (float)soma/TAM;
}

void troca(int x, int y) {
	for (int i=0;i<TAM;i++) {
		if (vetor[i] == x) vetor[i] = y;
	}
}