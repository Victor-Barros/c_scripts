#include <stdio.h>
#include <stdlib.h>

//#define N 5

int main() {
	int N,*vect;

	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &N);

	vect = (int*)malloc(N*sizeof(int));

	printf("Entre um vetor de %d inteiros:\n", N);

	for (int i=0;i<N;i++) {
		printf(">");
		scanf("%d", vect+i);
	}

	printf("\nSeu vetor: \n[");

	for (int i=0;i<N;i++) {
		printf(" %d ", *(vect+i));
	}
	printf("]\n");

	free(vect);

	return 0;
}