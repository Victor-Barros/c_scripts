#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
	char nome[64];
	char nasc[11];
	char cpf[12];
};

void ler(struct Pessoa*);

void imprimir(struct Pessoa*);

int main() {
	struct Pessoa pessoa;
	struct Pessoa *pessoas = &pessoa;

	ler(pessoas);
	imprimir(pessoas);

	return 0;
}

void ler(struct Pessoa *pessoas) {
	printf("Digite o nome da pessoa: ");
	scanf("%63[^\n]s", (*pessoas).nome);
	getchar();

	printf("Digite a data de nascimento (dd/mm/aaaa) de %s: ", (*pessoas).nome);
	scanf("%10[0-9/]", (*pessoas).nasc);
	getchar();

	printf("Digite o cpf (somente numeros) de %s: ", (*pessoas).nome);
	scanf("%11[0-9]", (*pessoas).cpf);
}

void imprimir(struct Pessoa *pessoas) {
	printf("\n%s:\n\tData de Nascimento: %s\n\tCpf: %s\n\n", (*pessoas).nome, (*pessoas).nasc, (*pessoas).cpf);
}