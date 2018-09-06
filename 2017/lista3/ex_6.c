#include <stdio.h>

int main(void) {
	int numeros[10];
	int positivos[10], pos_i=0;
	int negativos[10], neg_i=0;

	printf("Digite 10 inteiros: \n");
	for(int i=0;i<10;i++) {
		printf(">");
		scanf("%d", &numeros[i]);
		if (numeros[i] > 0) {
			positivos[pos_i] = numeros[i];
			pos_i++;
		} else if (numeros[i] < 0) {
			negativos[neg_i] = numeros[i];
			neg_i++;
		}
	}

	printf("Numeros:\n[ ");
	for(int i=0;i<10;i++) {
		printf("%d ", numeros[i]);
	}
	printf("]\n");

	printf("Positivos:\n[ ");
	for(int i=0;i<pos_i;i++) {
		printf("%d ", positivos[i]);
	}
	printf("]\n");


	printf("Negativos:\n[ ");
	for(int i=0;i<neg_i;i++) {
		printf("%d ", negativos[i]);
	}
	printf("]\n");
	return 0;
}