#include <stdio.h>

int main(void) {
	int vet1[5];
	int vet2[5];
	int vet3[5];
	int mat[3][5];
	int teste_max;

	for (int i=0;i<3;i++) {
		printf("Digite os elementos do vetor %d:\n", i+1);
		for (int j=0;j<5;j++) {
			printf(">");
			switch (i) {
				case 0: scanf("%d", &vet1[j]); break;
				case 1: scanf("%d", &vet2[j]); break;
				case 2: scanf("%d", &vet3[j]); break;
			}
		}
	}

	for(int i=0;i<3;i++) {
		for (int j=0;j<5;j++) {
			switch (i) {
				case 0: mat[i][j] = vet1[j]; break;
				case 1: mat[i][j] = vet2[j]; break;
				case 2: mat[i][j] = vet3[j]; break;
			}
		}
	}

	teste_max = mat[0][0];
	for(int i=0;i<3;i++) {
		for (int j=0;j<5;j++) {
			if (mat[i][j] > teste_max) {
				teste_max = mat[i][j];
			}
		}
	}

	printf("Matriz:\n");
	for(int i=0;i<3;i++) {
		printf("\n");
		for (int j=0;j<5;j++) {
			printf("%d ", mat[i][j]);
		}
	}

	printf("\n\nMaior valor: %d\n", teste_max);

	return 0;
}