#include <stdio.h>
#include <stdlib.h>

int **cria_matriz(int,int);

void libera_matriz(int**,int);

int main() {
	int m,n,**matriz;

	printf("Digite os valores de m e n:\n");
	scanf("%d %d", &m, &n);

	matriz=cria_matriz(m,n);

	printf("Digite os elementos da matriz (tamanho %dx%d):\n", m, n);
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			printf("[%d,%d]: ", i, j);
			scanf("%d", &matriz[i][j]);	
		}
	}

	printf("Matriz:\n");
	for (int i=0;i<m;i++) {
		printf("[");
		for (int j=0;j<n;j++) {
			printf(" %d ", matriz[i][j]);	
		}
		printf("]\n");
	}
	
	libera_matriz(matriz, m);

	return 0;
}

int **cria_matriz(int m, int n) {
	int **matriz=(int**)calloc(m,sizeof(int*));
	while(--m>=0) {
		matriz[m]=(int*)calloc(n,sizeof(int));
	}
	return matriz;
}

void libera_matriz(int **matriz, int m) {
	while(--m>=0) {
		free(matriz[m]);
	}
	free(matriz);	
}
