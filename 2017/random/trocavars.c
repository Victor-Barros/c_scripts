#include <stdio.h>

void trocavars(int*,int*);

int main(void) {
	int a,b;
	int* apt=&a;
	int* bpt=&b;

	printf("Digite dois valores inteiros: ");
	scanf("%d", apt);
	scanf("%d", bpt);

	printf("Os valores digitados: a=%d e b=%d\n", a, b);
	trocavars(apt,bpt);
	printf("Os valores depois da troca: a=%d e b=%d\n", a, b);
	return 0;
}

void trocavars(int* apt,int* bpt) {
	int aux = *apt;
	*apt = *bpt;
	*bpt = aux;
}
