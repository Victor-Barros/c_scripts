#include <stdio.h>
#include <math.h>

int main(void) {
	double salario;
	double aumento;

	printf("Digite o seu salario:\n>");
	scanf("%lf", &salario);

	printf("Digite o aumento em %%:\n>");
	scanf("%lf", &aumento);

	printf("\nSeu novo salario eh R$%.2f, aumentado em R$%.2f \n", salario*(1+aumento/100), salario*(aumento/100));
	return 0;
}