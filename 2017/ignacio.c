#include <stdio.h>

#define N 10

int main() {
	FILE *arq = fopen("teste.txt","r");
	double mat[N][N];

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			fscanf(arq, "%lf", &mat[i][j]);
			//printf("%lf  ", mat[i][j]);
		}
		//printf("\n");
	}
	fclose(arq);
	
	return 0;
}
