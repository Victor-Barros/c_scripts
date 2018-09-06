#include <stdio.h>
#include <math.h>

int main(void) {
	double op1;
	double op2;

	printf("Digite o operando 1:\n>");
	scanf("%lf", &op1);

	printf("Digite o operando 2:\n>");
	scanf("%lf", &op2);
	
	printf("%g + %g = %g\n\n",op1, op2, op1+op2);
	printf("Utilizando os endereços %p e %p\n", &op1, &op2);
	return 0;
}