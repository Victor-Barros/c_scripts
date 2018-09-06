#include <stdio.h>
#include <string.h>

struct Pessoa {
	char nome[21];
	char telefone[21];
	float altura;
};

void in(char*,int,char*);

int main() {
	struct Pessoa pessoas[5];

	for (int i=0;i<5;i++) {
		printf("Digite o nome da pessoa %d: ", i);
		in(pessoas[i].nome,20,"%[A-Za-z .]");

		printf("Digite a altura de %s: ", pessoas[i].nome);
		scanf("%f", &pessoas[i].altura);
		getchar();

		printf("Digite o telefone de %s: ", pessoas[i].nome);
		in(pessoas[i].telefone,20,"%20[0-9.-]");
	}

	for (int i=0;i<5;i++) {
		printf("Pessoa %d: \n\tNome: %s. \n\tAltura: %f  \n\tTelefone: %s\n\n", i, pessoas[i].nome, pessoas[i].altura, pessoas[i].telefone);

	}

	return 0;
}

void in(char *saida, int num, char *cast) {
	char buffer[num+1];
	if (fgets(buffer, num, stdin)) sscanf(buffer, cast, saida);
}

