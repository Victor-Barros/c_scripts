#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void cria_arquivo() {
	FILE *arquivo;
	int i;
	//arquivo = fopen("inteiros.txt", "w");
	arquivo = fopen("inteiros.dat", "wb");
	if (ferror(arquivo)) {
		printf("Erro!\n");
		exit(1);
	}
	printf("Processo filho: escrevendo arquivo...\n");
	for (i=1;i<=100;i++) {
		//fprintf(arquivo, "%d\n", i);
		fwrite(&i, sizeof(int), 1, arquivo);
	}
	fclose(arquivo);
	exit(0);
}

void le_arquivo() {
	FILE *arquivo; 
	int i=0;
	//arquivo = fopen("inteiros.txt", "r");
	arquivo = fopen("inteiros.dat", "rb");
	if (ferror(arquivo)) {
		printf("Erro!\n");
		exit(1);
	}
	printf("Processo pai: lendo arquivo...\n");
	while(1) {
		//fscanf(arquivo, "%d", &i);
		fread(&i, sizeof(int), 1, arquivo);
		if(feof(arquivo)) break;
		printf("%d\n", i);
	}
	fclose(arquivo);
}

int main(int argc, char **argv) {
	pid_t filho;

	if ((filho=fork())<0) {
		printf("Erro!\n");
		exit(1);
	} else if (filho == 0) {
		cria_arquivo();
	} else {
		wait(NULL);
		le_arquivo();
	}

	return 0;
}