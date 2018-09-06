#include <stdio.h>

int main(void) {
	
	double valor;
	int real,c50,c25,c10,c5,c1;

	printf("Digite um valor em reais:\n>");
	scanf("%lf", &valor);

	real = (int)valor;
	valor = valor-real;

	c50 = (int)(valor/.5);
	valor -= c50*.5;
	
	c25 = (int)(valor/.25);
	valor -= c25*.25;

	c10 = (int)(valor/.1);
	valor -= c10*.1;

	c5 = (int)(valor/.05);
	valor -= c5*.05;

	c1 = (int)(valor/.01); 

	printf("Quantidade das moedas: \n%d de 1 Real \n%d de 50 Centavos \n%d de 25 Centavos \n%d de 10 Centavos \n%d de 5 Centavos \n%d de 1 Centavo \n", real, c50, c25, c10, c5, c1);
	return 0;
}