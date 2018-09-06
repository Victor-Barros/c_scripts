#include <stdio.h>

int main(void) {

	int divisor, inicio, fim;

	printf("Digite o divisor:\n>");
	scanf("%d", &divisor);

	printf("Digite o inicio do intervalo:\n>");
	scanf("%d", &inicio);

	printf("Digite o fim do intervalo:\n>");
	scanf("%d", &fim);

	for(int i=inicio;i<=fim;i++) {
		
		if(i%divisor == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}