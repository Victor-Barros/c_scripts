#include <stdio.h>

int main(void) {
	
	int numero;
	char continuar='\0';
	double res;

	while (continuar != 'n' && continuar != 'N') {
		printf("Digite o Nº:\n>");
		scanf("%d%*c", &numero);

		res = 1;
		
		for(int i=numero;i>0;i--) {
			res = res*(i); 
		}

		printf("%i! = %g\n",numero ,res);

		printf("Voce deseja continuar? (s/n)\n>");
		scanf("%c%*c", &continuar);
	}
	return 0;
}