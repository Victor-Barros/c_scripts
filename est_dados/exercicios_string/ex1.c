#include <stdio.h>
#include <string.h>

int buscar(char*, char, int);

int main() {
	char string[256], buffer[256], c;
	int index=0, res;

	printf("Digite uma string: \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%[ a-zA-Z0-9/.,-]",string);

	printf("Digite um caractere a ser buscado na string: \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%c", &c);

	printf("Digite o indice de partida da busca [default 0]\n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%d", &index);

	if (index < strlen(string)) {

		res = buscar(string, c, index);

		if (res >=0) printf("A posição encontrada foi [%d], em \"%s\"\n", res, string+res);
		else printf("Não foi encontrado\n");
	} else printf("Invalido\n");

	return 0;
}


int buscar(char *string, char c, int index) {
	for (int i=index;i<strlen(string);i++) {
		if (*(string+i) == c) return i;
	}
	return -1;
}