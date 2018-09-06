#include <stdio.h>

int main(void) {
	float a=5,b=7;
	float *p, *q;
	p=&a;
	q=&b;

	printf("a) R: %f\n", *q-*p);
	printf("b) R: %f\n", *q**p);
	printf("c) R: %f\n", 2**q**p*3);
	printf("d) R: %f\n", (*q**q)-(*p**p));
	return 0;
}
