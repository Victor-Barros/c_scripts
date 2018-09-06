#include <stdio.h>

int main() {

	double A,B,C,soma=0;
	printf("Digite os operandos de (A^B): ");
	scanf("%lf %lf", &A, &B);
	C=A;

	while (B>1) {
		for (int i=A;i>0;i--) {
			soma+=C;
		}
		C=soma;
		soma=0;
		B--;
	}

	printf("A^B = %g\n", C);

	return 0;
}

