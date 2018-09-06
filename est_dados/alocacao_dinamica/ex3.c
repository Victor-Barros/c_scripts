#include <stdio.h>
#include <stdlib.h>

int main() {

	int L,N,M,***mat;

	printf("Digite o tamanho da matriz(LxMxN): \n");
	scanf("%d %d %d", &L, &M, &N);


	mat=(int***)malloc(L*sizeof(int));
	for (int i=0;i<M;i++) {
		mat[i]=(int**)malloc(M*sizeof(int));
		for (int j=0;j<N;j++) {
			mat[i][j]=(int*)malloc(N*sizeof(int));
		}
	}

	printf("Entre os elementos inteiros da matriz tridimensional(%dx%dx%d):\n", L, M, N);

	for (int i=0;i<L;i++) {
		for (int j=0;j<M;j++){
			for (int k=0;k<N;k++) {
				printf("[%d,%d,%d]:",i, j, k);
				scanf("%d", &mat[i][j][k]);
			}
		}
	}

	printf("\n\nMatriz entrada:\n");

	for (int i=0;i<L;i++) { 
		printf("[");
		for (int j=0;j<M;j++) {
			printf(" [");
			for (int k=0;k<N;k++){
				printf(" %d ", mat[i][j][k]);
			}
			printf("] ");
		}
		printf("]\n");
	}


	for (int i=0;i<L;i++) {
		for (int j=0;j<M;j++) {
			free(mat[i][j]);
		}
		free(mat[i]);
	}
	free(mat);

	return 0;
}