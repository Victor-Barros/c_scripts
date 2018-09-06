#include <stdio.h>

int main(void) {
	int numero, i;
	char continuar='\0';
	double res;

	while (continuar != 'n' && continuar != 'N') {
		printf("Digite o Nº:\n>");
		scanf("%d%*c", &numero);
		
		i = numero;
		res = 1;
		
		while(i>0) {
			res = res*(i); 
			i--;
		}
		printf("%i! = %g\n",numero ,res);

		printf("Voce deseja continuar? (s/n)\n>");
		scanf("%c%*c", &continuar);
	}
	return 0;
}
	


	