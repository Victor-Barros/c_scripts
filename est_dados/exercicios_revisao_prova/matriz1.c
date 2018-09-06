#include <stdio.h>

void mostra(int[3][3]);

int main() {

	int matriz1[3][3]={
		{1,2,1},
		{1,3,3},
		{1,2,2}
	};
	
	int matriz2[3][3]={
		{4,5,6},
		{4,5,6},
		{4,5,6}
	};

	int det=0, soma[3][3], mult[3][3];


	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			soma[i][j]=matriz1[i][j]+matriz2[i][j];
			mult[i][j]=matriz1[i][0]*matriz2[0][j]+matriz1[i][1]*matriz2[1][j]+matriz1[i][2]*matriz2[2][j];
		}
	}

	det += matriz1[0][0]*(matriz1[1][1]*matriz1[2][2]-matriz1[2][1]*matriz1[1][2]);
	det -= matriz1[0][1]*(matriz1[1][0]*matriz1[2][2]-matriz1[2][0]*matriz1[1][2]); 
	det += matriz1[0][2]*(matriz1[1][0]*matriz1[2][1]-matriz1[2][0]*matriz1[1][1]);

	
	printf("\nMatriz 1:\n");
	mostra(matriz1);

	printf("\nMatriz 2: \n");
	mostra(matriz2);

	printf("\nMatriz soma: \n");
	mostra(soma);

	printf("\nMatriz multiplicacao: \n");
	mostra(mult);

	printf("\nDeterminante de M1: %d\n", det);

}

void mostra(int matriz[3][3]) {
	for (int i=0;i<3;i++) {
		printf("[");
		for (int j=0;j<3;j++) {
			printf(" %d ", matriz[i][j]);
		}
		printf("]\n");
	}
}