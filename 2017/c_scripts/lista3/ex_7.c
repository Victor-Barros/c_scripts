#include <stdio.h>

int main(void) {
	int mat[5][10];

	printf("Digite os valores de uma matrix 5x10:\n");
	for(int i=0;i<5;i++) {
		for(int j=0;j<10;j++) {
			printf("Linha %d, Coluna %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}

	for(int j=0;j<10;j++) {
		printf("Coluna %d: \n[ ", j+1);
		for(int i=0;i<5;i++) {
			printf("%d ", mat[i][j]);
		}
		printf("]\n");
	}
	return 0;
}