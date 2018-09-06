#include <stdio.h>
#include <stdlib.h>

int main() {

	int N,M,**mat;

	printf("Digite o tamanho da matriz(MxN): \n");
	scanf("%d %d", &M, &N);


	mat=(int**)malloc(M*sizeof(int));
	for (int i=0;i<N;i++) {
		mat[i]=(int*)malloc(N*sizeof(int));
	}

	printf("Entre os elementos inteiros da matriz(%dx%d):\n", M, N);

	for (int i=0;i<M;i++) {
		for (int j=0;j<N;j++){
			printf("[%d,%d]:",i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("\n\nMatriz entrada:\n");

	for (int i=0;i<M;i++) {
		printf("[");
		for (int j=0;j<N;j++){
			printf(" %d ", mat[i][j]);
		}
		printf("]\n");
	}

	for (int i=0;i<M;i++) {
		free(mat[i]);
	}
	free(mat);

	return 0;
}