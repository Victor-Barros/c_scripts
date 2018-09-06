#include <stdio.h>
#include <string.h>

int busca(char*, char*);

int main() {
	char string1[256], string2[256], buffer[256];
	int res=0;

	printf("Digite uma string: \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%[ a-zA-Z0-9/,.-]", string1);	

	printf("Digite outra string a ser buscada na primeira: \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%[ a-zA-Z0-9/,.-]", string2);	

	if (strlen(string2) > strlen(string1)) {
		printf("Invalido\n");
		return 0;
	}

	res = busca(string1, string2);

	printf("Numero de ocorrencias: %d\n", res);

	return 0;
}

int busca(char *string1, char *string2) {
	int flag=0, cont=0;

	for (int i=0;i<=(strlen(string1)-strlen(string2));i++) {
		for (int j=0;j<strlen(string2);j++) {
			if (*(string1+i+j) != *(string2+j)) {
				flag = 1;
				break;
			}
		}
		if (!flag) cont++;
		flag = 0;
	}
	return cont;
}