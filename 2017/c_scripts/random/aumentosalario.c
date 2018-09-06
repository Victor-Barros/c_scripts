#include <stdio.h>

int main(void) {
	double salario;

	printf("Digite o seu salario\n>");
	scanf("%lf", &salario);

	if (salario <= 1000) { 			//tem direito a 7%
		salario += salario*.07; 
	} else { 						//tem direito a 5%
		salario += salario*.05;
	}

	printf("Seu novo salario eh: %g\n", salario);
	return 0;
}