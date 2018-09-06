#include <stdio.h>

int main(void) {
	int i=2, j=3, aux;
	int *pi=&i, *pj=&j;

	printf("Valores antes da troca: i=%d e j=%d\n", i, j);
	aux = *pi;
	*pi = *pj;
	*pj = aux;
	printf("Valores antes da troca: i=%d e j=%d\n", i, j);
	return 0;
}