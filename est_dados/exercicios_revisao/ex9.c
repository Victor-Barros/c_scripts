#include <stdio.h>
#include <string.h>

#define n 5

struct Carro {
	char modelo[64];
	char cor[16];
	char placa[7];
	int ano;
};

int main() {
	char input[256]; //buffer de entrada
	struct Carro carros[n];
	int cont_verdes=0, cont_1990=0, cont_UNO=0, cont_5=0; //testes 

	for (int i=0;i<n;i++) {

		printf("Digite o modelo do carro [%d]:\n", i);
		if (fgets(input, sizeof(input), stdin)) {
    		sscanf(input, "%255[ a-zA-Z]", carros[i].modelo);
		}

		printf("Digite a cor do carro [%d]:\n", i);
		if (fgets(input, sizeof(input), stdin)) {
    		sscanf(input, "%255[ a-zA-Z]", carros[i].cor);
		}

		printf("Digite a placa(LLNNNN) do carro [%d]:\n", i);
		if (fgets(input, sizeof(input), stdin)) {
    		sscanf(input, "%255[ a-zA-Z]", carros[i].placa);
		}

		printf("Digite o ano(AAAA) do carro [%d]:\n", i);
		if (fgets(input, sizeof(input), stdin)) {
    		sscanf(input, "%d", &carros[i].ano);
		}

		//testes

		if (!strcasecmp(carros[i].cor, "verde")) cont_verdes++;
		if (carros[i].ano < 1990) cont_1990++;
		if (!strcasecmp(carros[i].modelo, "fiat uno")) cont_UNO++;
		if (!strstr(carros[i].placa,"5")) cont_5++;

	}

	printf("\nListagem dos carros:\n");

	for (int i=0;i<n;i++) {
		printf("Carro %d: [Modelo %s, Cor %s, Placa %s, Ano %d]\n", i, carros[i].modelo, carros[i].cor, carros[i].placa, carros[i].ano);
	}

	printf("\nNro de carros na cor verde: %d[%g%%]\n", cont_verdes, ((double)cont_verdes/n)*100);
	printf("Nro de carros fabricados antes de 1990: %d[%g%%]\n", cont_1990, ((double)cont_1990/n)*100);
	printf("Nro de carros do modelo FIAT UNO: %d[%g%%]\n", cont_UNO, ((double)cont_UNO/n)*100);
	printf("Nro de carros com 5 na placa: %d[%g%%]\n", cont_5, ((double)cont_5/n)*100);

	return 0;
}