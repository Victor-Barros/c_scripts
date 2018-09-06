#include <stdio.h>

int main(void) {
	int numeros[100];
	int somatorio=0;

	printf("Digite 100 inteiros: \n");
	for(int i=0;i<100;i++) {
		printf(">");
		scanf("%d", &numeros[i]);
		somatorio += numeros[i];
	}

	printf("Somatorio: %d\n", somatorio);
	return 0;
}