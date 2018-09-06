#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5//fator de aumento do vetor

struct Funcionario {
	int id;
	char sexo; // m ou f
	int idade;
	float salario; 
};

int main() {	
	struct Funcionario *funcionarios;
	int n=5; //numero inicial de funcionarios
	funcionarios = (struct Funcionario*)malloc(n*sizeof(struct Funcionario));

	int i=0;
	while (1) {
		if (i >= n) {
			n=n+N;
			funcionarios = (struct Funcionario*)realloc(funcionarios, n*sizeof(struct Funcionario));
		}

		printf("Digite o codigo do funcionario: "); 
		scanf("%d", &funcionarios[i].id);
		if (funcionarios[i].id < 0) break;
		getchar(); //limpa buffer
		
		printf("Digite o sexo do funcionario %d (m ou f): ", funcionarios[i].id);
		scanf("%[mf]", &funcionarios[i].sexo);
		
		printf("Digite a idade do funcionario %d: ", funcionarios[i].id);
		scanf("%d", &funcionarios[i].idade);

		printf("Digite o salario do funcionario %d: ", funcionarios[i].id);
		scanf("%f", &funcionarios[i].salario);

		i++;
	}

	printf("\n\nLista de funcionarios: \n");

	for (int j=0;j<i;j++) {
		printf("Funcionario[%d,%c,%d,%f]\n",funcionarios[j].id,funcionarios[j].sexo,funcionarios[j].idade,funcionarios[j].salario);
	}

	printf("Fim.\n");

	free(funcionarios);

	return 0;
}