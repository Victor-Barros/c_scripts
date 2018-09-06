#include <stdio.h>

int main(void) {
	double preco;
	int moedas[5], troco;

	printf("Informe o valor do doce em R$:\n>");
	scanf("%lf", &preco);

	troco = (1-preco)*100;

	printf("Troco: %d centavo(s)\n", troco);

	moedas[0] = troco/50;
	troco = troco - moedas[0]*50;

	moedas[1] = troco/25;
	troco = troco - moedas[1]*25;

	moedas[2] = troco/10;
	troco = troco - moedas[2]*10;

	moedas[3] = troco/5;
	troco = troco - moedas[3]*5;

	moedas[4] = troco;

	printf("50c [%d]\n25c [%d]\n10c [%d]\n5c  [%d]\n1c  [%d] \n",	
		moedas[0], moedas[1], moedas[2], moedas[3], moedas[4]);

	return 0;
}