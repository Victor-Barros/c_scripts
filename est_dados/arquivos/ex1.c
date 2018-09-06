#include <stdio.h>

int file_char(char*);
int file_string(char*);
int file_printf(char*);

int main() {
	
	//file_char("teste1.txt");
	//file_string("teste2.txt");
	file_printf("teste3.txt");

	return 0;
}

int file_char(char *nome) {
	char buffer='0';
	int i;
	FILE *arquivo;

	if (!(arquivo=fopen(nome, "w"))) return 1;

	for (i='a'; i<='z'; i++) {
		fputc(i,arquivo);
	}

	fclose(arquivo);
	if(!(arquivo=fopen(nome, "r"))) return 1;

	while ((buffer=fgetc(arquivo))!=EOF) printf("%c", buffer); 
	printf("\n");

	fclose(arquivo);
	return 0;
}

int file_string(char *nome) {
	char *string="Esta string eh um teste", resposta[256];
	FILE *arquivo;

	if (!(arquivo=fopen(nome, "w"))) return 1;

	fputs(string, arquivo);
	fclose(arquivo);

	if (!(arquivo=fopen(nome, "r"))) return 1;

	fgets(resposta, 255, arquivo);
	fclose(arquivo);
	
	if (resposta) printf("%s\n", resposta);
	else return 1;

	return 0;
}

int file_printf(char *nome) {
	int num=276, resposta;
	FILE *arquivo;

	if (!(arquivo=fopen(nome, "w"))) return 1;

	fprintf(arquivo,"%d", num);
	fclose(arquivo);

	if (!(arquivo=fopen(nome, "r"))) return 1;

	fscanf(arquivo, "%d", &resposta);
	fclose(arquivo);
	
	printf("%d\n", resposta);

	return 0;
}