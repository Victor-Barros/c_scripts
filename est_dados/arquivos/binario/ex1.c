#include <stdio.h>

typedef struct { 
   int codigo; 
   char nome[256]; 
   int ativo; 
}Cliente; 

void inserir(FILE*, int);
void alterar(FILE*, int);
void excluir(FILE*, int);
void consultar(FILE*, int);
void listar(FILE*);

FILE *inicializar(char*, char*);
void encerrar();

int main() {
	FILE *arquivo;
	long int atual=0;
	int chose=-1;
	
	arquivo = inicializar("clientes.dat", "rb+");
	if (arquivo) {
		while (chose != 0) {
			fseek(arquivo, 0, SEEK_END);
			atual = ftell(arquivo)/sizeof(Cliente);
			printf("\n====MENU====\n1. Inserir\n2. Alterar\n3. Excluir\n4. Consultar\n5. listar\n0. Sair\n============\n>");
			scanf("%d", &chose);
			getchar();
			switch(chose) {
				case 1: {inserir(arquivo, atual); break;}
				case 2: {alterar(arquivo, atual); break;}
				case 3: {excluir(arquivo, atual); break;}
				case 4: {consultar(arquivo, atual); break;}
				case 5: {listar(arquivo); break;}
				case 0: {encerrar(arquivo); break;}
				default: {printf("Invalido!\n"); break;}
			}
			
		}
		
	}
	return 0;
}

void inserir(FILE *arquivo, int atual) {
	Cliente cli;
	printf("\nDigite o nome do cliente: ");
	scanf("%255[^\n]s", cli.nome);
	getchar();
	cli.ativo=1;
	cli.codigo=atual;
	fwrite(&cli, sizeof(Cliente), 1, arquivo);
	
	if (ferror(arquivo)) printf("Nao foi possivel realizar a operacao.\n");
}

void alterar(FILE *arquivo, int atual) {
	Cliente cli;
	int pos;
	printf("\nDigite o codigo do cliente a ser alterado: ");
	scanf("%d", &pos);
	getchar();
	if (pos<=atual) {
		fseek(arquivo, sizeof(Cliente)*pos, SEEK_SET);
		fread(&cli, sizeof(Cliente), 1, arquivo);
	}
	if (!ferror(arquivo)) {
		printf("Cliente selecionado: '%s'.\nDigite o novo nome: ", cli.nome);
		scanf("%255[^\n]s", cli.nome);
		getchar();
		fseek(arquivo, sizeof(Cliente)*pos, SEEK_SET);
		fwrite(&cli, sizeof(Cliente), 1, arquivo);
	} else {
		printf("Nao encontrado.\n");
	}
	if (ferror(arquivo)) printf("Ocorreu um erro.\n");
}

void excluir(FILE *arquivo, int atual) {
	Cliente cli;
	int pos;
	printf("\nDigite o codigo do cliente a ser excluido: ");
	scanf("%d", &pos);
	getchar();
	if (pos<=atual) {
		fseek(arquivo, sizeof(Cliente)*pos, SEEK_SET);
		fread(&cli, sizeof(Cliente), 1, arquivo);
	}
	if (!ferror(arquivo)) {
		cli.ativo = 0;
		fseek(arquivo, sizeof(Cliente)*pos, SEEK_SET);
		fwrite(&cli, sizeof(Cliente), 1, arquivo);
	} else {
		printf("Nao encontrado.\n");
	}
	if (ferror(arquivo)) printf("Ocorreu um erro.\n");

}

void consultar(FILE *arquivo, int atual) {
	Cliente cli;
	int pos;
	printf("\nDigite o codigo do cliente a ser consultado: ");
	scanf("%d", &pos);
	getchar();
	if (pos<=atual) {
		fseek(arquivo, sizeof(Cliente)*pos, SEEK_SET);
		fread(&cli, sizeof(Cliente), 1, arquivo);
	}
	if (!ferror(arquivo)) {
		printf("Cliente de codigo %d: \n\tNome: %s\n", cli.codigo, cli.nome);
		if (!cli.ativo) printf("\t[CLIENTE INATIVO]\n");
	} else {
		printf("Nao encontrado.\n");
	}
}

void listar(FILE *arquivo) {
	Cliente cli;
	printf("\nListagem dos clientes:\n");
	fseek(arquivo, 0, SEEK_SET);
	fread(&cli, sizeof(Cliente), 1, arquivo);
	while (!feof(arquivo)) {
		if (cli.ativo) printf("[Codigo: %d, Nome: %s]\n", cli.codigo, cli.nome);
		fread(&cli, sizeof(Cliente), 1, arquivo);
	}
}


FILE *inicializar(char *nome, char *tipo) {
	FILE *arquivo;
	arquivo=fopen(nome, "ab+"); //Cria arquivo se nao existe
	fclose(arquivo);
	arquivo=fopen(nome, tipo);
	if (arquivo == NULL) {
		printf("Erro!\n");
		return NULL;
	} else return arquivo; 
}

void encerrar(FILE *arquivo) {
	printf("Fechando arquivo...\n");
	fclose(arquivo);
}
