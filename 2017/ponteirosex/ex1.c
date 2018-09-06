#include <stdio.h>

int main(void) {
	int a=25;
	float b=50.25;
	int *apt=&a;
	float *bpt=&b;

	printf("Valores: a=%d, b=%f\nEnderecos: a->%p, b->%p\n", *apt,*bpt,apt,bpt);
	return 0;
}