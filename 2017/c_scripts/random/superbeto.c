#include <stdio.h>

int main(void) {
	double preco;
	int tipos[] = {50,25,10,5,1};
	int moedas[5], troco;

	printf("Informe o valor do doce em R$:\n>");
	scanf("%lf", &preco);

	troco = (1-preco)*100;
	printf("Troco: %d centavo(s)\n", troco);

	for (int i=0;i<5;i++) {
		troco -= (moedas[i] = troco/tipos[i])*tipos[i];
	}

	printf("50c [%d]\n25c [%d]\n10c [%d]\n5c  [%d]\n1c  [%d] \n",	
		moedas[0], moedas[1], moedas[2], moedas[3], moedas[4]);
	return 0;
}