#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario {
	int id;
	char sexo; // m ou f
	int idade;
	float salario; 
};

int main() {	
	struct Funcionario funcionario;
	
	FILE *arquivo = fopen("funcionarios.txt","w"); //w - write

	funcionario.id=0;
	while (funcionario.id >= 0) {
		printf("Digite o codigo do funcionario: "); 
		scanf("%d", &funcionario.id);
		if (funcionario.id < 0) break;
		getchar(); //limpa buffer
		printf("Digite o sexo do funcionario %d (m ou f): ", funcionario.id);
		scanf("%[mf]", &funcionario.sexo);
		printf("Digite a idade do funcionario %d: ", funcionario.id);
		scanf("%d", &funcionario.idade);
		printf("Digite o salario do funcionario %d: ", funcionario.id);
		scanf("%f", &funcionario.salario);

		fprintf(arquivo,"Funcionario[%d,%c,%d,%f]\n",funcionario.id,funcionario.sexo,funcionario.idade,funcionario.salario);
	}

	printf("Fim.\n");

	fclose(arquivo);

	return 0;
}