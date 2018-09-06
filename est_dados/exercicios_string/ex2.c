#include <stdio.h>
#include <string.h>

int busca(char*, char*);

int main() {
	char string1[256], string2[256], buffer[256];
	int res;

	printf("Digite uma string: \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%[ a-zA-Z0-9/.,-]",string1);

	printf("Digite outra string: \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%[ a-zA-Z0-9/.,-]",string2);


	if (strlen(string1) < strlen(string2)) {
		printf("Invalido\n");
	} else {
		res = busca(string1, string2);
		if (res >= 0) printf("Posicao encontrada: [%d], em \"%s\"\n", res, string1+res);
		else printf("Nao encontrado\n");
	}

	return 0;
}

int busca(char *string1, char *string2) {
	int index=0, flag=0;

	for (int i=0;i<strlen(string1);i++) {
		for (int j=0;j<=strlen(string1)-i;j++) {
			if (*(string2+j) == '\0') {
				flag = 1;
				break;
			} else if (*(string1+i+j) != *(string2+j)) break;
		}
		if (flag) return i;
	}
	return -1;
}